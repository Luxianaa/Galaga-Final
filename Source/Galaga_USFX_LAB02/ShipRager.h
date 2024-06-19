// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipRager.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AShipRager : public AActor
{
	GENERATED_BODY()
	
public:	
	AShipRager();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* RageMesh;  
	UPROPERTY(VisibleAnywhere, Category = "fACADE") 
	class AFacadeShip* FacadeShip; 

protected:
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	void Move();
	int Vidas;
	void Despawn();
	bool bIsActive;
	FVector InitialLocation;
	FVector FinalLocation; 
	bool bReachedMiddle;
	float TimeAlive;
	float MovementSpeed;
	float TimeAtMiddle; 
	FTimerHandle MovementTimerHandle;
	void Shoot();
	float FireRate;
	FTimerHandle FireTimerHandle;
	FTimerHandle MoveTimerHandle;
	void RecibirImpacto();  
};
