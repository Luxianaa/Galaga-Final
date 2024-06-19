// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaBigPoppa.h"
#include "NaveEnemigaBigPoppaLv1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaBigPoppaLv1 : public ANaveEnemigaBigPoppa
{
	GENERATED_BODY()

public:
	ANaveEnemigaBigPoppaLv1();

protected:
	FString tipoNave = "BigPoppaLv1";
	
};
