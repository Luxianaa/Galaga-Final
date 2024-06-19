// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IHendrixState.h"
#include "CrazyState.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ACrazyState : public AActor, public IIHendrixState 
{
	GENERATED_BODY()
	
public:	
	ACrazyState();

protected:
	virtual void BeginPlay() override;
private:
	class AHendrixShip* Hendrix;
public:	
	virtual void Tick(float DeltaTime) override;
private:
	int32 currentTargetIndex;
	TArray<FVector> targetLocations;
	float Speed;
	float Radio;
	float Angulo;

public:

	virtual void Move(float DeltaTime) override;
	virtual void Drop() override;
	virtual void Hide() override;
	virtual void SetHendrix(class AHendrixShip* _Hendrix) override; 

};
