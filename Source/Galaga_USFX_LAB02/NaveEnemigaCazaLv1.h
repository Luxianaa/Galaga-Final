// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaLv1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaCazaLv1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
public:
		ANaveEnemigaCazaLv1();
protected:
	FString tipoNave = "CazaLv1"; 
	virtual void BeginPlay() override;
public:
	void Tick(float DeltaTime) override;

	
};
