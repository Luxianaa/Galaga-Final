// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MotherShip.h"	
#include "IBuilderMotherShip.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBuilderMotherShip : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_USFX_LAB02_API IIBuilderMotherShip
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void BuildMotherShipMesh() = 0;
	virtual void BuildMotor() = 0;	
	virtual void BuildShield() = 0;	
	virtual void BuildPropellants() = 0; 
	virtual void BuildWeapons() = 0;
	virtual class AMotherShip* GetMotherShip() = 0; 

	class AMeshMotherShip* Mesh; 
	class AMotor* Motor;
	class AShield* Shield;
	class APropellants* Propellants;
	class AWeapons* Weapons;

	
};
