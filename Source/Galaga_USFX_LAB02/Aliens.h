// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Aliens.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AAliens : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAliens();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* meshAlien;
	int VelocidadVertical ;
	int Vidas;
	class UAComponenteMovimiento* Movimiento;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void FireProjectile();
	void Drop();
	FTimerHandle TimerHandle;
	float FireRate;
	void RecibirImpacto();
	
};
