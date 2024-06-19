// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaLv1.h"

ANaveEnemigaEspiaLv1::ANaveEnemigaEspiaLv1()
{
    PrimaryActorTick.bCanEverTick = true;

    TargetLocations.Add(FVector(7500.0f, -1600.0f, 200.0f));      // Punto A
    TargetLocations.Add(FVector(8500.0f, -1100.0f, 200.0f));      // Punto B
    TargetLocations.Add(FVector(7500.0f, -600.0f, 200.0f));       // Punto C
    TargetLocations.Add(FVector(6500.0f, -1100.0f, 200.0f));      // Punto D
    TargetLocations.Add(FVector(7500.0f, -1600.0f, 200.0f));      // De vuelta a Punto A

    CurrentTargetIndex = 0;
    Speed = 2000.0f;

}

void ANaveEnemigaEspiaLv1::Tick(float DeltaTime)
{
    Super ::Tick(DeltaTime); 

    FVector NewLocation = GetActorLocation();
    FVector TargetLocation = TargetLocations[CurrentTargetIndex];
    FVector Direction = (TargetLocation - NewLocation).GetSafeNormal();
    float Distance = FVector::Distance(TargetLocation, NewLocation);
    NewLocation += Direction * Speed * DeltaTime;
    SetActorLocation(NewLocation);
    if (Distance < 10.0f)
    {
        CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetLocations.Num();
    }
} 
