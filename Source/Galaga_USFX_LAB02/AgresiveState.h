// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IHendrixState.h"
#include "AgresiveState.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AAgresiveState : public AActor, public IIHendrixState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAgresiveState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int32 currentTargetIndex; 
	TArray<FVector> targetLocations; 
	float Speed; 
	int32 NumShotsFired;
	int32 MaxShots;
private:
	class AHendrixShip* Hendrix;
public:
	virtual void Move(float DeltaTime) override;
	virtual void Drop() override;
	virtual void Hide() override;
	virtual void SetHendrix(class AHendrixShip* _Hendrix) override; 

};
