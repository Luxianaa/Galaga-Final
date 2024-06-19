// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons.h"
#include "MShipProjectile.h"
#include "Sound/SoundBase.h" 
#include "Kismet/GameplayStatics.h"

AWeapons::AWeapons()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> meshWeapons(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_2.Shape_Pipe_2'"));
	MeshWeapons = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMotor"));
	MeshWeapons->SetupAttachment(RootComponent);
	MeshWeapons->SetStaticMesh(meshWeapons.Object); 
	SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
	RootComponent = MeshWeapons;
	FireRate = 1.0f;

	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/TwinStick/Audio/TwinStickFire.TwinStickFire'"));
	FireSound = FireAudio.Object;
}

void AWeapons::BeginPlay()
{
	Super::BeginPlay();
	 GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AWeapons::FireProjectiles, FireRate, true);
}

void AWeapons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapons::FireProjectiles()
{
	AMShipProjectile* Projectile = GetWorld()->SpawnActor<AMShipProjectile>(AMShipProjectile::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{

		FVector ForwardDirection = GetActorForwardVector();

		FRotator SpawnRotation = ForwardDirection.Rotation();

		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);

		Projectile->Fires();
	}
}

