	// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePruebas.h"
#include "ProyectilEnemigo.h"
#include "AComponenteMovimiento.h"

// Sets default values
ANavePruebas::ANavePruebas()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshPrueba(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_6.TwinStickUFO_6'"));
	NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NavePrueba"));
	ComponenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("MovimientoNavesComponente"));  
	NaveMesh->SetupAttachment(RootComponent);
	NaveMesh->SetStaticMesh(MeshPrueba.Object);
	RootComponent = NaveMesh; 
	NaveMesh->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	FireRate = 0.3f;
	Vidas = 7;
}

void ANavePruebas::BeginPlay()
{
	Super::BeginPlay();   
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANavePruebas::DoubleFire, FireRate, true);
}

void ANavePruebas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);  
}

void ANavePruebas::DoubleFire()
{
	FVector Offset1 = FVector(50.0f, -30.0f, 0.0f);
	FVector Offset2 = FVector(50.0f, 30.0f, 0.0f);
	FVector Offset3 = FVector(50.0f, 0.0f, 0.0f); 
	FVector ForwardDirection = GetActorForwardVector();
	FRotator SpawnRotation = ForwardDirection.Rotation();

	// Configura la posición y dirección del segundo proyectil
	FVector SpawnLocation1 = GetActorLocation() + GetActorForwardVector() * Offset1.X + GetActorRightVector() * Offset1.Y + GetActorUpVector() * Offset1.Z; 
	AProyectilEnemigo* Projectile1 = GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation1, SpawnRotation);
	if (Projectile1)
	{
		Projectile1->Fire();
	}
	FVector SpawnLocation2 = GetActorLocation() + GetActorForwardVector() * Offset2.X + GetActorRightVector() * Offset2.Y + GetActorUpVector() * Offset2.Z;
	AProyectilEnemigo* Projectile2 = GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation2, SpawnRotation);
	if (Projectile2)
	{
		Projectile2->Fire();
	}
	FVector SpawnLocation3 = GetActorLocation() + GetActorForwardVector() * Offset3.X + GetActorRightVector() * Offset3.Y + GetActorUpVector() * Offset3.Z;
	AProyectilEnemigo* Projectile3 = GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation3, SpawnRotation);
	if (Projectile3)
	{
		Projectile3->Fire();
	}
}

void ANavePruebas::RecibirDamage()
{
	Vidas--;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %d"), Vidas));     
	if (Vidas <= 0)
	{
		Destroy();
	}
}





