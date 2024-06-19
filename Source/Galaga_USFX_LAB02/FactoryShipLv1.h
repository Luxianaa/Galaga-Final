// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "IAbsFactory.h"	
#include "FactoryShipLv1.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AFactoryShipLv1 : public AActor, public IIAbsFactory
{
	GENERATED_BODY()
	
public:	
	AFactoryShipLv1();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual ANaveEnemiga* CreateShips(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator) override;


};
