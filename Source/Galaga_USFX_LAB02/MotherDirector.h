// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderMotherShip.h"
#include "MotherDirector.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AMotherDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	AMotherDirector();

protected:
	virtual void BeginPlay() override;
private:
	 IIBuilderMotherShip* ShipBuilder;

public:	
	virtual void Tick(float DeltaTime) override;
	
	void ConstructShips();
	void SetBuilder(AActor* Builder);
	class AMotherShip* GetMotherShip();
};
