// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AComponenteMovimiento.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_LAB02_API UAComponenteMovimiento : public UActorComponent
{
	GENERATED_BODY()

public:	
	//UStaticMeshComponent* mallaNaveE;
	
	UAComponenteMovimiento();

// forMovimiento Iguala
	float MovimientoNaves = 4;
	float limiteInferiorY = 1600.0f;
	float VelocidadHorizontal =800.0f;
	int DireccionMovimientoHorizontal=1;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AparecerDesaparecerNaves();
	//void DesaparecerNavesEspias();
	//void MostrarNavesEspias(); 
	FTimerHandle TiempoVisibilidad;

	void ShieldVisibility();
	FTimerHandle TiempoVisibilidad2;
private:
	//AActor* NaveEnemiga;
};
