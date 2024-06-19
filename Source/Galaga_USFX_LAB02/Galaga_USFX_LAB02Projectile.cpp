// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFX_LAB02Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveEnemiga.h"
#include "Shield.h"
#include "MeshMotherShip.h"
#include "ShieldMotherShip.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "FacadeShip.h"
#include "HendrixShip.h"


AGalaga_USFX_LAB02Projectile::AGalaga_USFX_LAB02Projectile()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFX_LAB02Projectile::OnHit);		
	RootComponent = ProjectileMesh;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; 



	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSys(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'")); 
	ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	ParticleSystemComponent->SetTemplate(ParticleSys.Object);
	ParticleSystemComponent->SetupAttachment(RootComponent);
	InitialLifeSpan = 3.0f;

}

void AGalaga_USFX_LAB02Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	FacadeShip->CollideProjectile(OtherActor);
	FacadeShip->CollideShield(OtherActor);
	FacadeShip->CollideAliens(OtherActor);  
	FacadeShip->CollideRagerShirp(OtherActor); 
	FacadeShip->CollideNavesPruebas(OtherActor);  
	AHendrixShip* Hendrix = Cast<AHendrixShip>(OtherActor);
	if (Hendrix)
	{
		Hendrix->ReceiveDamageHendrix();
	}
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

