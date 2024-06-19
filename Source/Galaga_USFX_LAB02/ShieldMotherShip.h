// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderMotherShip.h"  
#include "ShieldMotherShip.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AShieldMotherShip : public AActor, public IIBuilderMotherShip
{
	GENERATED_BODY()
	
public:	
	AShieldMotherShip();
private:
	UPROPERTY(VisibleAnywhere, Category = "MotherShip") 
		class AMotherShip* MotherShip;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void BuildMotherShipMesh() override;
	virtual void BuildMotor() override; 
	virtual void BuildShield() override;
	virtual void BuildPropellants() override; 
	virtual void BuildWeapons() override; 
	virtual class AMotherShip* GetMotherShip() override; 
};
