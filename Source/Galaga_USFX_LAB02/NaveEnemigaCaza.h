// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	float Radio ;
	float Angulo ; 
	float Speed ; 

public:
	ANaveEnemigaCaza();

protected:
	FString tipoNave ="Caza";
	virtual void BeginPlay() override;
	void Drops();
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override; 
private:
	class UAComponenteMovimiento* componenteMovimiento;   
	
};
