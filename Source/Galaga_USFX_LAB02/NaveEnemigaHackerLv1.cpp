// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaHackerLv1.h"


ANaveEnemigaHackerLv1::ANaveEnemigaHackerLv1()
{
	targetLocations.Add(FVector(7200.0f, 1600.0f, 200.0f));       
	targetLocations.Add(FVector(6620.0f, 1000.0f, 200.0f));     
	targetLocations.Add(FVector(6990.0f, 560.0f, 200.0f));     
	targetLocations.Add(FVector(6620.0f, 40.0f, 200.0f));     
	targetLocations.Add(FVector(6990.0f, -480.0f, 200.0f));  
	targetLocations.Add(FVector(6620.0f, -950.0f, 200.0f));    
	targetLocations.Add(FVector(7200.0f, -1600, 200.0f));        

	currentTargetIndex = 0;
}

void ANaveEnemigaHackerLv1::Tick(float DeltaTime)
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
}
