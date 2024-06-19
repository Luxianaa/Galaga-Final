// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipYorke.h"
#include "AComponenteMovimiento.h"
#include "YorkProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Publisher.h"
#include "IStrategy.h"


AShipYorke::AShipYorke()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> meshYorke(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_4.TwinStickUFO_4'"));
	ShipYorke = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrope"));
	ShipYorke->SetupAttachment(RootComponent);
	ShipYorke->SetStaticMesh(meshYorke.Object);
	RootComponent = ShipYorke;
	FireRate = 1.0f;
	Vida = 3;
	bIsDoubleFiring = false;

}

void AShipYorke::BeginPlay()
{
	Super::BeginPlay();
}

void AShipYorke::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);  
}

void AShipYorke::FireProjectile()
{
	FVector Offset1 = FVector(50.0f, -30.0f, 0.0f); 

	FVector ForwardDirection = GetActorForwardVector();

	FRotator SpawnRotation = ForwardDirection.Rotation();

	FVector SpawnLocation1 = GetActorLocation() + GetActorForwardVector() * Offset1.X + GetActorRightVector() * Offset1.Y + GetActorUpVector() * Offset1.Z;
	AYorkProjectile* Projectile1 = GetWorld()->SpawnActor<AYorkProjectile>(AYorkProjectile::StaticClass(), SpawnLocation1, SpawnRotation);
	if (Projectile1)
	{
		Projectile1->Fire();
	}
}

void AShipYorke::GetDamage()
{
	if (Vida <= 0) 
	{
		Destroy(); 
	} 
}

void AShipYorke::Update()
{
	if (!bIsDoubleFiring) 
	{
		DoubleFire(); 
		bIsDoubleFiring = true;
	}
	else if (bIsDoubleFiring) 
	{
		bIsDoubleFiring = false; 
	}
}

void AShipYorke::DestroySubs()
{
	Publisher->RemoveObserver(this);
	Destroy(); 
}

void AShipYorke::DoubleFire()
{
	FVector Offset1 = FVector(50.0f, -30.0f, 0.0f); 
	FVector Offset2 = FVector(50.0f, 30.0f, 0.0f); 
	FVector ForwardDirection = GetActorForwardVector();
	FRotator SpawnRotation = ForwardDirection.Rotation();

	FVector SpawnLocation1 = GetActorLocation() + GetActorForwardVector() * Offset1.X + GetActorRightVector() * Offset1.Y + GetActorUpVector() * Offset1.Z;
	AYorkProjectile* Projectile1 = GetWorld()->SpawnActor<AYorkProjectile>(AYorkProjectile::StaticClass(), SpawnLocation1, SpawnRotation);
	if (Projectile1)
	{
		Projectile1->Fire();
	}
	FVector SpawnLocation2 = GetActorLocation() + GetActorForwardVector() * Offset2.X + GetActorRightVector() * Offset2.Y + GetActorUpVector() * Offset2.Z;
	AYorkProjectile* Projectile2 = GetWorld()->SpawnActor<AYorkProjectile>(AYorkProjectile::StaticClass(), SpawnLocation2, SpawnRotation);
	if (Projectile2)
	{
		Projectile2->Fire();
	}
}

void AShipYorke::SetStrategy(IIStrategy* NewStrategy)
{
	Strategy = NewStrategy; 
}

void AShipYorke::ActivarEstrategiaMovimiento()
{
	if (Strategy)
	{
		Strategy->Move(this);    
	}
}

void AShipYorke::SetPublisher(APublisher* _Publisher)
{
		Publisher = _Publisher; 
		Publisher->AddObserver(this); 
}



