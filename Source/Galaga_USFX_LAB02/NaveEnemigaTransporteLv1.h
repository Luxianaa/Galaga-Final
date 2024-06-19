// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteLv1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaTransporteLv1 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
public:
	ANaveEnemigaTransporteLv1();

	FString tipoNave = "TransporteLv1";
 
public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;
	
};
