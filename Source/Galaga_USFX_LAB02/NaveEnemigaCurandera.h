// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCurandera.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaCurandera : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaCurandera();

protected:
	FString tipoNave = "Curandera";	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override;

};
