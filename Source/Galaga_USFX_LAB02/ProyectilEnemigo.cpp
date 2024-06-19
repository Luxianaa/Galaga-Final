// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "FacadeShip.h"
#include "ShipYorke.h"


AProyectilEnemigo::AProyectilEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaSo(TEXT("StaticMesh'/Game/TwinStick/Meshes/ProyectilEnemigo.ProyectilEnemigo'"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	mallaProyectil->SetStaticMesh(mallaSo.Object); 
	mallaProyectil->SetupAttachment(RootComponent);
	RootComponent = mallaProyectil; 
	mallaProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	mallaProyectil->OnComponentHit.AddDynamic(this, &AProyectilEnemigo::OnHit);

	

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = mallaProyectil;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.0f; 


	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSys(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
	ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	ParticleSystemComponent->SetTemplate(ParticleSys.Object); 
	ParticleSystemComponent->SetupAttachment(RootComponent); 
	Damage = 10.0f;
	InitialLifeSpan = 3.0f;
}

void AProyectilEnemigo::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AProyectilEnemigo::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f ;
	SetActorLocation(NewLocation);

}

void AProyectilEnemigo::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{ 
	FacadeShip->CollideEnemyProjectile(OtherActor);
	if (ParticleSystemComponent) 
	{ 
		ParticleSystemComponent->Activate(); 
	}
	 
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
	AShipYorke* ShipYorke = Cast<AShipYorke>(OtherActor);
	if (ShipYorke)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, TEXT("Colision con nave"));

		ShipYorke->GetDamage(); 
	}
}

void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

