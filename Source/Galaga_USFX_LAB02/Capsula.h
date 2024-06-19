// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IHandleCapsules.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ACapsula : public AActor, public IIHandleCapsules
{
	GENERATED_BODY()
	
public:	
	//FString TipoCapsula;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaCapsula;
	ACapsula();

protected:
	virtual void BeginPlay() override;
	
public:	
	virtual void Tick(float DeltaTime) override;
protected:
	IIHandleCapsules* NextHandler;
public:
	virtual void HandleSolicitud(class AGalaga_USFX_LAB02Pawn* Player) override;
	virtual void SetNextHandler(IIHandleCapsules* Next) override;
};
