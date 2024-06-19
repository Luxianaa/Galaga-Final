// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moon.generated.h" 

UCLASS()
class GALAGA_USFX_LAB02_API AMoon : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoon();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallamoon; 
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	float Tiempo = 0;
	float GetTiempo() { return Tiempo;}


};
