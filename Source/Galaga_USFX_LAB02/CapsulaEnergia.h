// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaEnergia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ACapsulaEnergia : public ACapsula
{
	GENERATED_BODY()

public:	
	ACapsulaEnergia();
	FString tipoCapsula = "Energia";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit); 
protected: 
	virtual void BeginPlay() override;
	bool bEnergy; 
public:
	virtual void Tick(float DeltaTime) override;
	class AFacadeShip* FacadeShip;
	void Drop();
	virtual void HandleSolicitud(class AGalaga_USFX_LAB02Pawn* Player) override; 
	
};
