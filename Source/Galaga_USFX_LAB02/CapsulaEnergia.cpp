// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "FacadeShip.h"

ACapsulaEnergia::ACapsulaEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/Meshes/EnergyCapsule.EnergyCapsule'"));
	mallaCapsula->SetStaticMesh(mallaC.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsule");
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaEnergia::OnHit);
	bEnergy = false;
}

void ACapsulaEnergia::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn && !bEnergy)
	{
		HandleSolicitud(Pawn); 
	} 
}

void ACapsulaEnergia::BeginPlay()
{
	Super::BeginPlay();
	NextHandler = nullptr;
}

void ACapsulaEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACapsulaEnergia::Drop()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() *300;
	SetActorLocation(NewLocation);
}

void ACapsulaEnergia::HandleSolicitud(AGalaga_USFX_LAB02Pawn* Player)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(Player);
	if (Pawn && Pawn->GetVidasRestantes() < 10 && !bEnergy)
	{
		Pawn->AumentarVelocidad(); 
		FString Message = FString::Printf(TEXT("Vidas restantes: %d "), Pawn->GetVidasRestantes()); 
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, Message); 
		bEnergy = true;
		Destroy();
	}
	else if (NextHandler)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Black, "Limite Alcanzado!!!");
	}
}