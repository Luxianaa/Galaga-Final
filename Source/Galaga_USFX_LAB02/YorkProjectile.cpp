// Fill out your copyright notice in the Description page of Project Settings.


#include "YorkProjectile.h"
#include "ShipYorke.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "FacadeShip.h"
#include "Aliens.h"


AYorkProjectile::AYorkProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaSo(TEXT("StaticMesh'/Game/TwinStick/Meshes/ShipMotherPorjectile_2.ShipMotherPorjectile_2'"));
	YorkProjectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	YorkProjectile->SetStaticMesh(mallaSo.Object);  
	YorkProjectile->SetupAttachment(RootComponent);
	RootComponent = YorkProjectile; 
	YorkProjectile->BodyInstance.SetCollisionProfileName("Projectile");
	YorkProjectile->OnComponentHit.AddDynamic(this, &AYorkProjectile::OnHit);



	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = YorkProjectile;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f; 
}

void AYorkProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

void AYorkProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AYorkProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AYorkProjectile::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void AYorkProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	FacadeShip->CollideProjectile(OtherActor);
	FacadeShip->CollideAliens(OtherActor);
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
}

