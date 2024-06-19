// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AComponenteMovimiento.h"
#include "NaveEnemiga.generated.h"


UCLASS(Abstract)
class GALAGA_USFX_LAB02_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	int caca;
	float velocidad;
	float Radio ; 
	float Angulo; 
	float Speed ; 
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound; 
	int Vida;
	
public:	
	ANaveEnemiga();

protected:
	virtual void BeginPlay() override;
	float FireRate;
	FTimerHandle FireTimerHandle;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void FireProjectile();
	virtual void ReceiveDamage() PURE_VIRTUAL(ANaveEnemiga::ReceiveDamage, );
};
