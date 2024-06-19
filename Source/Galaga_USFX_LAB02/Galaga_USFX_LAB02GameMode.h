// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB02GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	AGalaga_USFX_LAB02GameMode();
protected:

	virtual void BeginPlay() override;	
public:
	virtual void Tick(float DeltaTime) override;

protected:
//----------------------------------------------Builder
	UPROPERTY(VisibleAnywhere, Category = "ShieldMotherShip")
	class AShieldMotherShip* ShieldMotherShip;
	UPROPERTY(VisibleAnywhere, Category = "NasMotherShip")
	class ANasMotherShip* NasMotherShip;
	UPROPERTY(VisibleAnywhere, Category = "DoomMotherShip")
	class ADoomMotherShip* DoomMotherShip;
	UPROPERTY(VisibleAnywhere, Category = "MotherDirector")
	class AMotherDirector* MotherDirector;
//----------------------------------------------Facade
	UPROPERTY(VisibleAnywhere, Category = "FacadeShip")
	class AFacadeShip* FacadeShip;
	FTimerHandle SpawnTimerHandle;
	void SpawnRagerShip();
	//-----------------------------Observer
	class AMoon* Moon; 
	class AShipYorke* ShipYorke;
	class APublisher* Publisher;
	class AHendrixShip* HendrixShip;
	class AShipRager* ShipRager;
	float Time;
	//---------------------------Strategy
	float Tiempo;  
	class AStrategyStraight* StrategyStraight;
	class AStrategyCrazy* StrategyCrazy;
	class AStrategyAlly* StrategyAlly; 
	class ANavePruebas* NavePrueba;
	class ANaveEnemiga * NaveEnemiga;
	//------------------------------Command

	class AInvoker* Invoker;
	class AShipPatrol* Receptor;
	class ACommadDrop* CommandDrop;
	class ACommandMove* CommandMove;
	class ACommandTeleport* CommandTeleport;
	class ACommandBomber* CommandBomber;

	void ExecuteCommandDrop();
	void ExecuteCommandMove();
	void ExecuteCommandTeleport(); 
	void ExecuteCommandBomber();
	void DeshacerComando(); 

	class IICommand* UltimoComando;
	TArray<IICommand*> Comandos;      
};



