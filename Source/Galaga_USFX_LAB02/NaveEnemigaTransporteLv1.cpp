// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteLv1.h"

ANaveEnemigaTransporteLv1::ANaveEnemigaTransporteLv1()
{
     targetLocations.Add(FVector(7200.0f, 1600, 200));    // Coordenada 1
     targetLocations.Add(FVector(6620.0f, 1000, 200));  // Coordenada 2 
     targetLocations.Add(FVector(6990.0f, 560, 200));  // Coordenada 3
     targetLocations.Add(FVector(6620, 40, 200));  // Coordenada 4
     targetLocations.Add(FVector(6990.0f, -480, 200));  // Coordenada 5
     targetLocations.Add(FVector(6620.0f, -950, 200));    // Coordenada 6
     targetLocations.Add(FVector(7200.0f, -1600, 200));    // Coordenada 7
     speed = 1000.0f;
     currentTargetIndex = 0;
}

void ANaveEnemigaTransporteLv1::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);

        
        FVector newLocation = GetActorLocation();
        FVector targetLocation = targetLocations[currentTargetIndex];
        FVector direction = (targetLocation - newLocation).GetSafeNormal();
        float distance = FVector::Distance(targetLocation, newLocation);
        newLocation += direction * speed * DeltaTime;

        SetActorLocation(newLocation);

        if (distance < 10.0f)
        {
            currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
        }
//-----------------------------------------------------------------------------------------//
        float AlturaInicial = 200.0f;
        float AlturaFinal = 350.0f;

        float NuevaAltura = FMath::Lerp(AlturaInicial, AlturaFinal, FMath::Abs(FMath::Sin(GetWorld()->TimeSeconds * VelocidadVertical)));

        if (FMath::IsNearlyEqual(NuevaAltura, AlturaFinal, 1.0f))
        {
            VelocidadVertical *= -1.0f;
        }
        SetActorLocation(FVector(GetActorLocation().X, NuevaAltura,GetActorLocation().Z));  
}
