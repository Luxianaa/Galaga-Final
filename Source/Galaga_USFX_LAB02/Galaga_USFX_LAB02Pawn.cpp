// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB02Pawn.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CapsulaCrazy.h"
#include "StrategyDefensive.h"
#include "StrategyOffensive.h"
#include "StrategyDeluxe.h"
//---------Chain----------------
#include "Capsula.h"
#include "CapsulaVida.h"
#include "CapsulaEnergia.h"
#include "IHandleCapsules.h"



const FName AGalaga_USFX_LAB02Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_LAB02Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_LAB02Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_LAB02Pawn::FireRightBinding("FireRight");

AGalaga_USFX_LAB02Pawn::AGalaga_USFX_LAB02Pawn()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	// Create the mesh component   /Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/StarterContent/Assets/laser-gun-shot-sound-future-sci-fi-lazer-wobble-chakongaudio-174883.laser-gun-shot-sound-future-sci-fi-lazer-wobble-chakongaudio-174883'"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm


	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	ContImpacto = 0;

	//Teleport al respawn Spawn
	SetActorLocation(FVector(-885.0f, -122.0f, 200.0f));// posicion inicial del jugador  
	posicionInicial = GetActorLocation();
	PlayerInputEnabled = true;
	VidasRestantes = 10;

}

void AGalaga_USFX_LAB02Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent); //revisar si es necesario  
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	FInputActionKeyMapping Desactivar("Desactivar", EKeys::L);
	UPlayerInput::AddEngineDefinedActionMapping(Desactivar); 
	PlayerInputComponent->BindAction("Desactivar", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::Desactivar);  
	
	// Define la acción "Teleport" y vincula la tecla "T" a ella
	FInputActionKeyMapping Teleport("Teleport", EKeys::T); 
	UPlayerInput::AddEngineDefinedActionMapping(Teleport); 
	PlayerInputComponent->BindAction("Teleport", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::Teleport); 
	// Vincula la acción "Teleport" a la función de teletransporte de tu Pawn
	
	//-----------------------------------------------------------------------------------------------------------------------//

	PlayerInputComponent->BindAction("Defensiva", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::KeyDefensiveStrategy); 
	FInputActionKeyMapping Defensive("Defensiva", EKeys::M); 
	UPlayerInput::AddEngineDefinedActionMapping(Defensive);   
	// Vincula la acción "Defensiva" a la función de estrategia defensiva de tu Pawn
	PlayerInputComponent->BindAction("Ofensiva", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::KeyOffensiveStrategy);
	FInputActionKeyMapping Offensive("Ofensiva", EKeys::N);
	UPlayerInput::AddEngineDefinedActionMapping(Offensive);
	// Vincula la acción "Ofensiva" a la función de estrategia ofensiva de tu Pawn
	PlayerInputComponent->BindAction("Deluxe", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::KeyDeluxeStrategy);
	FInputActionKeyMapping Deluxe("Deluxe", EKeys::B);
	UPlayerInput::AddEngineDefinedActionMapping(Deluxe);

	//-----------------------------------------------------------------------------------------------------------------------//

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGalaga_USFX_LAB02Pawn::Jump);	
	FInputActionKeyMapping Jump("Jump", EKeys::SpaceBar); 
	UPlayerInput::AddEngineDefinedActionMapping(Jump);
}

void AGalaga_USFX_LAB02Pawn::Tick(float DeltaSeconds)
{
	if (MovingCrazy) //si exist
	{
		// Agrega aquí la lógica para mover el Pawn de manera loca en x y y
		FVector NewLocation = GetActorLocation() + FVector(FMath::FRandRange(-2000.0f, 2000.0f), FMath::FRandRange(-2000.0f, 2000.0f), FMath::FRandRange(0.0f, 0.0f)) * DeltaSeconds;
		SetActorLocation(NewLocation);
	}
	if (PlayerInputEnabled)
	{
		// Verificar si el pawn está en el suelo
		// Find movement direction
		const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
		const float RightValue = GetInputAxisValue(MoveRightBinding);

		// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
		const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

		// Calculate  movement
		const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

		// If non-zero size, move this actor
		if (Movement.SizeSquared() > 0.0f)
		{
			const FRotator NewRotation = Movement.Rotation();
			FHitResult Hit(1.f);
			RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

			if (Hit.IsValidBlockingHit())
			{
				const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
				const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
				RootComponent->MoveComponent(Deflection, NewRotation, true);
			}
		}

		// Create fire direction vector
		const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
		const float FireRightValue = GetInputAxisValue(FireRightBinding);
		const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

		// Try and fire a shot
		FireShot(FireDirection);
	}
}

void AGalaga_USFX_LAB02Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFX_LAB02Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_LAB02Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGalaga_USFX_LAB02Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGalaga_USFX_LAB02Pawn::Teleport2()
{
	FVector NewLocation = GetActorLocation() + FVector(FMath::FRandRange(-6000.0f, 6000.0f), FMath::FRandRange(-6000.0f, 6000.0f), FMath::FRandRange(0.0f, 0.0f)); 
	SetActorLocation(NewLocation); 

}


void AGalaga_USFX_LAB02Pawn::BeginPlay()
{
	Super::BeginPlay();
	FirstHandler = GetWorld()->SpawnActor<ACapsulaVida>(ACapsulaVida::StaticClass()); 
	LastHandler = GetWorld()->SpawnActor<ACapsulaEnergia>(ACapsulaEnergia::StaticClass());
	FirstHandler->SetNextHandler(LastHandler); 
}

void AGalaga_USFX_LAB02Pawn::MoveCrazy()
{
	MovingCrazy = true;
	GetWorld()->GetTimerManager().SetTimer(CrazyMove, this, &AGalaga_USFX_LAB02Pawn::EndMoveCrazy, 5.0f, false);
}

void AGalaga_USFX_LAB02Pawn::EndMoveCrazy()
{
	MovingCrazy = false; // Desactiva el modo de movimiento loco
	SetPlayerInputEnabled(true); // Vuelve a Activa el control del jugador
}

void AGalaga_USFX_LAB02Pawn::SetPlayerInputEnabled(bool Activo)
{
	PlayerInputEnabled = Activo;
}

void AGalaga_USFX_LAB02Pawn::RecibirImpacto()
{
	//ReducirVida();
	CheckDestroy();
}

void AGalaga_USFX_LAB02Pawn::AumentarVida()
{
	VidasRestantes++;
}

void AGalaga_USFX_LAB02Pawn::AumentarVelocidad()
{
	MoveSpeed = 2000.0f; 
}

void AGalaga_USFX_LAB02Pawn::Desactivar()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	//SetActorTickEnabled(false);
}

void AGalaga_USFX_LAB02Pawn::ReducirVida()
{
	if (VidasRestantes > 0)
	{
		VidasRestantes--;
	}
}

void AGalaga_USFX_LAB02Pawn::CheckDestroy()
{
	VidasRestantes--;
	if (VidasRestantes <= 0)
	{
		// Código para destruir el pawn, por ejemplo:
		Destroy();
	}
}

void AGalaga_USFX_LAB02Pawn::SetStrategy(IIStrategyPawn* NewStrategy)
{
		Strategy = NewStrategy;
}

void AGalaga_USFX_LAB02Pawn::ActivateStrategy()
{
		if (Strategy)
		{
			Strategy->MoveFireHide();
		}
}

void AGalaga_USFX_LAB02Pawn::KeyDefensiveStrategy()
{
	StrategyDefensive =GetWorld()->SpawnActor<AStrategyDefensive>(AStrategyDefensive::StaticClass()); 
	SetStrategy(StrategyDefensive);
	StrategyDefensive->MoveFireHide();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Defensive Strategy On"));
}

void AGalaga_USFX_LAB02Pawn::KeyOffensiveStrategy()
{
	StrategyOffensive = GetWorld()->SpawnActor<AStrategyOffensive>(AStrategyOffensive::StaticClass());
	SetStrategy(StrategyOffensive);
	StrategyOffensive->MoveFireHide(); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Offensive Strategy On"));
}

void AGalaga_USFX_LAB02Pawn::KeyDeluxeStrategy()
{
	StrategyDeluxe = GetWorld()->SpawnActor<AStrategyDeluxe>(AStrategyDeluxe::StaticClass()); 
	SetStrategy(StrategyDeluxe);
	StrategyDeluxe->MoveFireHide(); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deluxe Strategy On"));
}

void AGalaga_USFX_LAB02Pawn::IniciarEstrategias()
{

	if (VidasRestantes >= 100)
	{
		SetStrategy(StrategyDefensive); 
		StrategyDefensive->MoveFireHide(); 
	}
	else if (VidasRestantes >= 50 && VidasRestantes < 100)
	{
		SetStrategy(StrategyDeluxe);
		StrategyDeluxe->MoveFireHide();
	}
	else
	{
		SetStrategy(StrategyDeluxe); 
		StrategyDeluxe->MoveFireHide(); 
	}
}

void AGalaga_USFX_LAB02Pawn::Teleport()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Jugador empezo a Teletransportar")));
	FVector NewLocation = GetActorLocation() + FVector(FMath::FRandRange(-6000.0f, 6000.0f), FMath::FRandRange(-6000.0f, 6000.0f), FMath::FRandRange(0.0f, 0.0f)); 
	SetActorLocation(NewLocation); 
}

void AGalaga_USFX_LAB02Pawn::Jump()
{
	FVector PosicionActual = GetActorLocation(); 
	float AlturaSalto = 100.0f; 
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y, PosicionActual.Z + AlturaSalto);  
}



