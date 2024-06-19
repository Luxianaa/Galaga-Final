// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyCrazy.h"
#include "ShipYorke.h"
#include "Aliens.h"

AStrategyCrazy::AStrategyCrazy()
{
    PrimaryActorTick.bCanEverTick = true;

    TargetLocations.Add(FVector(-600.0f, -1000.0f, 200.0f)); // Punto A
    TargetLocations.Add(FVector(-3000.0f, -500.0f, 200.0f));  // Punto B
    TargetLocations.Add(FVector(600.0f, 1000.0f, 200.0f));   // Punto C
    TargetLocations.Add(FVector(-600.0f, 1000.0f, 200.0f));  // Punto D
    TargetLocations.Add(FVector(-600.0f, -1000.0f, 200.0f)); // De vuelta a Punto A

    CurrentTargetIndex = 0;
    MovementSpeed = 3000.0f; 
    Time = 0.0f;
    NumShotsFired = 0;
    MaxShots = 10;
}

void AStrategyCrazy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStrategyCrazy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Time += DeltaTime;

}

void AStrategyCrazy::Move(AShipYorke* Yorke)
{
    if (TargetLocations.Num() == 0) return;

    FVector CurrentLocation = Yorke->GetActorLocation();
    FVector TargetLocation = TargetLocations[CurrentTargetIndex];
    FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
    FVector NewLocation = CurrentLocation + Direction * MovementSpeed * Yorke->GetWorld()->DeltaTimeSeconds;


    Yorke->SetActorLocation(NewLocation);

    if (FVector::Dist(NewLocation, TargetLocation) < 10.0f) 
    {
        CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetLocations.Num();
    }

    if (NumShotsFired >= MaxShots)
    {
        return;
    }

    AAliens* Alien = GetWorld()->SpawnActor<AAliens>(AAliens::StaticClass(), GetActorLocation(), GetActorRotation());
    if (Alien)
    {
        FVector ForwardDirection = Yorke->GetActorForwardVector(); 
        FRotator SpawnRotation = ForwardDirection.Rotation(); 
        FVector SpawnLocation = Yorke->GetActorLocation(); 

        FRotator AdjustedRotation = SpawnRotation; 
        AdjustedRotation.Pitch = 180.0f; 
        AdjustedRotation.Roll = 0.0f; 

        Alien->SetActorLocationAndRotation(SpawnLocation, AdjustedRotation); 
        Alien->Drop(); 
        NumShotsFired++; 
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Disparos realizados: %d"), NumShotsFired)); 
    } 
}

