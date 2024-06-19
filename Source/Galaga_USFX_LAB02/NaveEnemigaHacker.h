// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaHacker.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaHacker : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaHacker();
protected:

	FString tipoNave="Hacker";

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override; 
protected:
	int32 currentTargetIndex;
	float speed = 1000.0f;
	TArray<FVector> targetLocations;
private:
	class UAComponenteMovimiento* componenteMovimiento; 
};

