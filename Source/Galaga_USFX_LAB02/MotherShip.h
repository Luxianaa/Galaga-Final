// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISetMotherShip.h"
#include "AComponenteMovimiento.h"
#include "MotherShip.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AMotherShip : public AActor, public IISetMotherShip
{
	GENERATED_BODY()

public:

	AMotherShip();


private:

	class AMeshMotherShip* Mesh;
	class AShield* Shield;
	class AWeapons* Weapons;
	class AMotor* Motor;
	class APropellants* Propellants; 

	FString Malla;
	FString Motors;
	FString Escudo;
	FString Prope;
	FString Weapon;

public:
	UAComponenteMovimiento* ComponenteMovimiento;
protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetMotherShipMesh(AMeshMotherShip* mesh, FString malla) override;
	virtual void SetMotor(AMotor* motor, FString motors) override;
	virtual void SetShield(AShield* shield,FString escudo) override;
	virtual void SetPropellants(APropellants* propellants,FString prope) override;
	virtual void SetWeapons(AWeapons* weapons,FString weapon) override;  
	
	void caracteristicas(); 

};
