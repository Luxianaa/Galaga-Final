// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeShip.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AFacadeShip : public AActor
{
	GENERATED_BODY()

public:
	AFacadeShip();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Ships")
	class ANaveEnemiga* NaveEnemiga;
	class StrategyStraight* StrategyStraight; 
	class ANavesPruebas* NavesPruebas; 


public:
	virtual void Tick(float DeltaTime) override;
	void SpawnShipsLevel1();
	void SpawnShipsLevel2();
	void SpawnCapsules();
	void SpawnRagerShips();
	void SpawnShipsFinal(); 
	FTimerHandle SpawnTimerHandle; 
	void CollideProjectile(AActor* OtherActor);
	void CollideShield(AActor* OtherActor);
	void CollideCrazyCapsule(AActor* OtherActor); 
	void CollideEnergyCapsule(AActor* OtherActor); 	
	void CollideEnemyProjectile(AActor* OtherActor); 
	void CollideLifeCapsule(AActor* OtherActor); 
	void CollideAliens(AActor* OtherActor); 
	void CollideRagerShirp(AActor* OtherActor);
	void CollideNavesPruebas(AActor* OtherActor);

};
