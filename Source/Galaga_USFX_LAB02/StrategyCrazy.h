// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategy.h"
#include "StrategyCrazy.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AStrategyCrazy : public AActor, public IIStrategy
{
	GENERATED_BODY()
	
public:	
	AStrategyCrazy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
private:
	TArray<FVector> TargetLocations;
	int32 CurrentTargetIndex;
	float MovementSpeed;
	int32 NumShotsFired;
	int32 MaxShots;
	float Time;
	virtual void Move(class AShipYorke* Yorke) override;


};
