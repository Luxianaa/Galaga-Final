// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "ProyectilEnemigo.h"
#include "Sound/SoundBase.h" 
#include "Kismet/GameplayStatics.h"
#include "StrategyStraight.h"


ANaveEnemiga::ANaveEnemiga()
{

	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga; 
	SetActorScale3D(FVector(1.5, 1.5f, 1.5f));

    Radio = 300.0f;
    Angulo = 0.0f; 
    Speed = 5.0f;
	FireRate = 3.0f;
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/StarterContent/Assets/shoot02wav-14562.shoot02wav-14562'"));
	FireSound = FireAudio.Object;
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay(); 
	
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ANaveEnemiga::FireProjectile, FireRate, true);

}

void ANaveEnemiga::FireProjectile()
{
	AProyectilEnemigo* Projectile = GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{
		FVector ForwardDirection = GetActorForwardVector();

		FRotator SpawnRotation = ForwardDirection.Rotation();

		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		 
		if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		Projectile->Fire();
	}
}



// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}

