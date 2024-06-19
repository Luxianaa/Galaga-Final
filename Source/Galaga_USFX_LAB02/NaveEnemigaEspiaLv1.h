// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaLv1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaEspiaLv1 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
public:
	ANaveEnemigaEspiaLv1();

	FString tipoNave = "EspiaLv1";  

public:

	virtual void Tick(float DeltaTime) override;
};
