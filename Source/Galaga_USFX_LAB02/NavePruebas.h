// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "IStrategy.h"
#include "NavePruebas.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ANavePruebas : public AActor
{
	GENERATED_BODY()
	
public:	
	ANavePruebas();
	UStaticMeshComponent* NaveMesh;
	class UAComponenteMovimiento* ComponenteMovimiento;

protected:
	virtual void BeginPlay() override;
	int Vidas; 

public:	
	virtual void Tick(float DeltaTime) override;
public:
	void DoubleFire(); 
	float FireRate;
	FTimerHandle FireTimerHandle;
	void RecibirDamage();    

};
