// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "IAbsFactory.h"
#include "FactoryShip.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AFactoryShip : public AActor, public IIAbsFactory
{
	GENERATED_BODY()
	
public:	
	AFactoryShip();

protected:
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, Category = "Ship")
	class ANaveEnemiga* NaveEnemiga;	

public:	
	virtual void Tick(float DeltaTime) override;

	virtual ANaveEnemiga* CreateShips(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator) override;
};
