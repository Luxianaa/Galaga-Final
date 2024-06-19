// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "AComponenteMovimiento.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	int VelocidadVertical;
	float Radio = 500.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // Ángulo inicial
	float Speed2 = 20.0f;
	FString TipoNave = "Espia";
private:
	UAComponenteMovimiento* ComponenteMovimiento;

public:

	ANaveEnemigaEspia();	

public:

	virtual void Tick(float DeltaTime) override;
	virtual void ReceiveDamage() override;  
protected:
	TArray<FVector> TargetLocations;
	int32 CurrentTargetIndex;
	float Speed;

	
};
