// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaCrazy.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "NaveEnemiga.h"
#include "FacadeShip.h"

ACapsulaCrazy::ACapsulaCrazy()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/Meshes/EnergyCapsule_2.EnergyCapsule_2'"));
	mallaCapsula->SetStaticMesh(mallaC.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsule");
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaCrazy::OnHit);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Capsule"));
	ProjectileMovement->UpdatedComponent = mallaCapsula;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
	InitialLifeSpan = 6.0f;
}

void ACapsulaCrazy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	FacadeShip->CollideCrazyCapsule(OtherActor);
	Destroy();
}

void ACapsulaCrazy::FireCpasule()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void ACapsulaCrazy::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;

}


