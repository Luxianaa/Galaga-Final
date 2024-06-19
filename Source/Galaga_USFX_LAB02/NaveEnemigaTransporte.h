// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaTransporte();	
protected:
	int VelocidadVertical;
	float Radio = 500.0f; 
	float Angulo = 0.0f;
	float Speed = 20.0f;
	FString tipoNave = "Transporte";

	virtual void FireProjectile() override; 
private:
	class UAComponenteMovimiento* componenteMovimiento;    

protected:
	int32 currentTargetIndex;
	float speed = 1000.0f;
	TArray<FVector> targetLocations;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override; 

};
