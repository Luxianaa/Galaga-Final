// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveEnemiga.h"
#include "IAbsFactory.generated.h"

UINTERFACE(MinimalAPI)
class UIAbsFactory : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_LAB02_API IIAbsFactory
{
	GENERATED_BODY()
public: 
	virtual  ANaveEnemiga* CreateShips(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator) = 0;
};
