// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaNodriza();


public:
	virtual void Tick(float DeltaTime) override;
};
