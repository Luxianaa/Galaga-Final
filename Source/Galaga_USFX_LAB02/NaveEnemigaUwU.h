
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaUwU.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaUwU : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaUwU();
	FString tipoNave = "UwU";
	float FireRate = 1.0f;
	virtual void BeginPlay() override; 

public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override; 
private:
	class UAComponenteMovimiento* componenteMovimiento;
};


