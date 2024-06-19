// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CapsulaCrazy.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_LAB02_API ACapsulaCrazy : public ACapsula
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY(VisibleAnywhere, Category = "Facade")
	class AFacadeShip* FacadeShip;
public:
	ACapsulaCrazy();
	FString tipoCapsula = "Crazy";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	void FireCpasule();
	void FireInDirection(const FVector& ShootDirection);

};
