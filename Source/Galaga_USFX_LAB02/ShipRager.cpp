// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipRager.h"
#include "CapsulaCrazy.h"
#include "ProyectilEnemigo.h"
#include "FacadeShip.h"


AShipRager::AShipRager()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaRage(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_3.TwinStickUFO_3'"));
	RageMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrope"));
	RageMesh->SetupAttachment(RootComponent);
	RageMesh->SetStaticMesh(mallaRage.Object);
    RootComponent = RageMesh;
    SetActorScale3D(FVector(3.0f, 3.0f,3.0f)); 
	bIsActive = false;
	TimeAlive = 0.0f;
	MovementSpeed = 2000.0f;
    FireRate = 0.5f;
    Vidas = 3;
}

void AShipRager::BeginPlay()
{
	Super::BeginPlay();

    InitialLocation = GetActorLocation();

    bIsActive = true;

    SetActorLocation(InitialLocation);

    FinalLocation = FVector(InitialLocation.X , InitialLocation.Y * -1.0f, InitialLocation.Z);
        
    GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AShipRager::Shoot, FireRate, true);

 
}

// Called every frame
void AShipRager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if (bIsActive)
    {
        Move();
        TimeAlive += DeltaTime;

        if (TimeAlive > 10.0f)
        {
            Despawn();
        }
    }
}

void AShipRager::Move()
{
    if (!bReachedMiddle)
    {
        FVector CurrentLocation = GetActorLocation();
        FVector Midpoint = (InitialLocation + FinalLocation) * 0.5f;
        float DistanceToMidpoint = FVector::Dist(CurrentLocation, Midpoint);
        if (DistanceToMidpoint > 5.0f) 
        {
            FVector Direction = (Midpoint - CurrentLocation).GetSafeNormal();
            SetActorLocation(CurrentLocation + Direction * MovementSpeed * GetWorld()->GetDeltaSeconds());
        }
        else
        {
            bReachedMiddle = true;
            TimeAtMiddle = 3.0f; 
        }
    }
    else
    {
        TimeAtMiddle += GetWorld()->GetDeltaSeconds();

        if (TimeAtMiddle > 8.0f)
        {
            FVector CurrentLocation = GetActorLocation();
            float DistanceToFinal = FVector::Dist(CurrentLocation, FinalLocation);
            if (DistanceToFinal > 3.0f) 
            {
                FVector Direction = (FinalLocation - CurrentLocation).GetSafeNormal();
                SetActorLocation(CurrentLocation + Direction * MovementSpeed * GetWorld()->GetDeltaSeconds());
            }
            else
            {
                Despawn();
            }
        }
    }
}

void AShipRager::Despawn()
{
    bIsActive = false;
    SetActorLocation(InitialLocation);
    TimeAlive = 0.0f;
    PrimaryActorTick.bCanEverTick = false; 
}

void AShipRager::Shoot()
{
    ACapsulaCrazy* Crazy = GetWorld()->SpawnActor<ACapsulaCrazy>(ACapsulaCrazy::StaticClass(), GetActorLocation(), GetActorRotation());
    if(Crazy)
    {
        FVector ForwardDirection = GetActorForwardVector();

        FRotator SpawnRotation = ForwardDirection.Rotation();

        FVector SpawnLocation = GetActorLocation();
        Crazy->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);

        Crazy->FireCpasule(); 
    }
}

void AShipRager::RecibirImpacto()
{
    Vidas--;
    if (Vidas <= 0)
    {
		Destroy(); 
	}
}

