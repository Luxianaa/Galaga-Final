// Fill out your copyright notice in the Description page of Project Settings.


#include "Aliens.h"
#include "ProyectilEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Galaga_USFX_LAB02Projectile.h"
#include "AComponenteMovimiento.h"

AAliens::AAliens()
{
	PrimaryActorTick.bCanEverTick = true;
	VelocidadVertical = 1.0f; 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> meshA(TEXT("StaticMesh'/Game/StarterContent/Assets/fd4627fa2f53_d35e87a8daf0_moai__3d_asset_0_gl_fbx/d35e87a8daf0_moai__3d_asset_0_gl_2.d35e87a8daf0_moai__3d_asset_0_gl_2'"));
	meshAlien = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshAlien")); 
	Movimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("Movimiento"));
	meshAlien->SetupAttachment(RootComponent); 
	meshAlien->SetStaticMesh(meshA.Object); 
	RootComponent = meshAlien;  
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
	FireRate = 2.0f;
	InitialLifeSpan = 6.0f;
	Vidas=2;	 

}

void AAliens::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AAliens::FireProjectile, FireRate, true);
}

// Called every frame
void AAliens::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
}

void AAliens::FireProjectile()
{
	AProyectilEnemigo* Projectile = GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Projectile)
	{
		// Obtén la dirección hacia adelante de la nave enemiga
		FVector ForwardDirection = GetActorForwardVector();

		// Calcula la rotación basada en la dirección hacia adelante
		FRotator SpawnRotation = ForwardDirection.Rotation();

		// Configura la posición y dirección del proyectil
		FVector SpawnLocation = GetActorLocation();
		Projectile->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);

		/*if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}*/

		// Dispara el proyectil
		Projectile->Fire();
	}
}

void AAliens::Drop()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f; 
	SetActorLocation(NewLocation);  
}

void AAliens::RecibirImpacto()
{
	if (Vidas > 0)
	{
		Vidas--;

		Destroy();
	}
}


