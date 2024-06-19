// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AWeapons : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshWeapons;
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite) 
	class USoundBase* FireSound; 
public:	
	AWeapons();

protected:
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	void FireProjectiles();
	FTimerHandle FireTimerHandle;
	float FireRate;

};
