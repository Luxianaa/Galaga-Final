// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategyPawn.h"
#include "StrategyDeluxe.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AStrategyDeluxe : public AActor, public IIStrategyPawn
{
	GENERATED_BODY()
	
public:	
	AStrategyDeluxe();

protected:
	virtual void BeginPlay() override;
private:
	class AGalaga_USFX_LAB02Pawn* Pawn; 
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void MoveFireHide() override;

};
