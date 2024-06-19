// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IHendrixState.h"
#include "WeakState.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AWeakState : public AActor, public IIHendrixState
{
	GENERATED_BODY()
	
public:	
	AWeakState();

protected:
	virtual void BeginPlay() override;
private:
	TArray<FVector> TargetLocations; 
	int32 CurrentTargetIndex; 
	float Speed; 
	int32 NumShotsFired;
	int32 MaxShots;
public:	
	virtual void Tick(float DeltaTime) override;
	FTimerHandle TiempoVisibilidad; 
private:
	class AHendrixShip* Hendrix;
public:
	virtual void Move(float DeltaTime) override;
	virtual void Drop() override;
	virtual void Hide() override;
	virtual void SetHendrix(class AHendrixShip* _Hendrix) override; 



};
