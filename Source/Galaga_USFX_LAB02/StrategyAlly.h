// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategy.h"
#include "StrategyAlly.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AStrategyAlly : public AActor, public IIStrategy
{
	GENERATED_BODY()
	
public:	
	AStrategyAlly();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void Move(class AShipYorke* Yorke) override;
private:
	float Radio;
	float Angulo; 
	float Speed; 
	float Time;	
	int32 NumShotsFired; 
	int32 MaxShots; 
};
