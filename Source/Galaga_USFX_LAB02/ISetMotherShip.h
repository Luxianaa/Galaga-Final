// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISetMotherShip.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISetMotherShip : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB02_API IISetMotherShip
{
	GENERATED_BODY()
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetMotherShipMesh(class AMeshMotherShip* mesh,FString malla) = 0;
	virtual void SetMotor(class AMotor* motor,FString motors) = 0; 
	virtual void SetShield(class AShield* shield,FString escudo) = 0;
	virtual void SetPropellants(class APropellants* propellants,FString prope ) = 0;
	virtual void SetWeapons(class AWeapons* weapons,FString weapon) = 0;
};
