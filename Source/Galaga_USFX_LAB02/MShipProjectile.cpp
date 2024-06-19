// Fill out your copyright notice in the Description page of Project Settings.


#include "MShipProjectile.h"
#include "Galaga_USFX_LAB02Pawn.h"

// Sets default values
AMShipProjectile::AMShipProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaPM(TEXT("StaticMesh'/Game/TwinStick/Meshes/ShipMotherPorjectile.ShipMotherPorjectile'"));
	meshProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	meshProyectil->SetStaticMesh(mallaPM.Object);
	meshProyectil->SetupAttachment(RootComponent);
	RootComponent = meshProyectil;
	meshProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	meshProyectil->OnComponentHit.AddDynamic(this, &AMShipProjectile::OnHit);
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = meshProyectil;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.50f; 
	InitialLifeSpan = 3.0f;
}

void AMShipProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMShipProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMShipProjectile::FireInDirections(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AMShipProjectile::Fires()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void AMShipProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{
		FString Message = FString::Printf(TEXT(" Destruido "));
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, Message);
		Pawn->Destroy();  
	}
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	 
	Destroy();
}

