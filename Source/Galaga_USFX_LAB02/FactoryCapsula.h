// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.h"
#include "FactoryCapsula.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AFactoryCapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	AFactoryCapsula();
	UFUNCTION(BlueprintCallable, Category = "FabricaCapsulas")
	static ACapsula* GenerarCapsulas(FString tipoCapsula, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator);


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	FTimerHandle SpawnTimerHandle; 
};
