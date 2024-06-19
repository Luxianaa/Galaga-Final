// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB02GameMode.h"
#include "Galaga_USFX_LAB02Pawn.h"
//----------------------------------------------BUILDER
#include "MotherShip.h"
#include "ShieldMotherShip.h"
#include "DoomMotherShip.h"
#include "NasMotherShip.h"
#include "MotherDirector.h"
//----------------------------------------------FACADE
#include "FacadeShip.h" 
//----------------------------------------------OBSERVER
#include "Moon.h"
#include "Kismet/GameplayStatics.h"
#include "ShipYorke.h"
#include "Publisher.h"
//----------------------------------------------STRATEGY
#include "HendrixShip.h"
#include "NavePruebas.h"
#include "StrategyStraight.h"
#include "StrategyCrazy.h"
#include "StrategyAlly.h"
//----------------------------------------------COMMAND
#include "ShipPatrol.h" 
#include "Invoker.h"
#include "CommandTeleport.h"
#include "CommadDrop.h"
#include "CommandMove.h"
#include "CommandBomber.h"



AGalaga_USFX_LAB02GameMode::AGalaga_USFX_LAB02GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_LAB02Pawn::StaticClass();
	Comandos = TArray<IICommand*>();
	Tiempo = 0.0f;
	Time = 0.0f;
}

void AGalaga_USFX_LAB02GameMode::BeginPlay()
{
	Super::BeginPlay();     
	
//---------------------------------------------------------------------LEVEL1--------------------------------------------------------------------//


//--------------------------------------------------FACADE-------------------------------------------------------------------------------//

	FacadeShip = GetWorld()->SpawnActor<AFacadeShip>(AFacadeShip::StaticClass()); 
	FacadeShip->SpawnShipsLevel1();

//---------------------------------------------------------------------OBSERVER---------------------------------------------------------------------//

	FVector SpawnLocation2 = FVector(320.0f, 1480.0f, 990.0f);
	FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);  
	FVector SpawnLocation = FVector(-4000.0f, -115.0f, 200.0f);
	ShipYorke = GetWorld()->SpawnActor<AShipYorke>(AShipYorke::StaticClass(), SpawnLocation, FRotator::ZeroRotator); 
	Moon = GetWorld()->SpawnActor<AMoon>(SpawnLocation2, SpawnRotation);  
	Publisher = GetWorld()->SpawnActor<APublisher>(APublisher::StaticClass());  
	ShipYorke->SetPublisher(Publisher); 
	Publisher->ObserveMoon(Moon);

//--------------------------------------------------STRATEGY-------------------------------------------------------------------------------//

	StrategyStraight = GetWorld()->SpawnActor<AStrategyStraight>(AStrategyStraight::StaticClass()); 
	StrategyCrazy = GetWorld()->SpawnActor<AStrategyCrazy>(AStrategyCrazy::StaticClass()); 
	StrategyAlly = GetWorld()->SpawnActor<AStrategyAlly>(AStrategyAlly::StaticClass());

//-----------------------------------------------------BUILDER----------------------------------------------------------------------------------//
	
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		MotherDirector = GetWorld()->SpawnActor<AMotherDirector>(AMotherDirector::StaticClass()); 

		switch (FMath::RandRange(1, 3))
		{
		case 1:
			ShieldMotherShip = GetWorld()->SpawnActor<AShieldMotherShip>(AShieldMotherShip::StaticClass());
			MotherDirector->SetBuilder(ShieldMotherShip);
			MotherDirector->ConstructShips();
			break;

		case 2:
			NasMotherShip = GetWorld()->SpawnActor<ANasMotherShip>(ANasMotherShip::StaticClass());
			MotherDirector->SetBuilder(NasMotherShip);
			MotherDirector->ConstructShips();
			break;

		case 3:
			DoomMotherShip = GetWorld()->SpawnActor<ADoomMotherShip>(ADoomMotherShip::StaticClass());
			MotherDirector->SetBuilder(DoomMotherShip);
			MotherDirector->ConstructShips();

			break;
		}

		AMotherShip* MotherShip = MotherDirector->GetMotherShip();
		MotherShip->caracteristicas();
	}
	 
//----------------------------------------------LEVEL2-------------------------------------------------------------------------------------------------------------------//

	FacadeShip->SpawnShipsLevel2();
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &AGalaga_USFX_LAB02GameMode::SpawnRagerShip, 15.0f, true);   

//-------------------------------------------------------------------FINALLEVEL------------------------------------------------------------//

	FVector SpawnLocation3 = FVector(16100.0f, -115.0f, 200.0f);   

	HendrixShip = GetWorld()->SpawnActor<AHendrixShip>(AHendrixShip::StaticClass(), SpawnLocation3, SpawnRotation); 
	FacadeShip->SpawnShipsFinal(); 

//--------------------------------------------------COMMAND-------------------------------------------------------------------------------//
	FVector SpawnLocation4 = FVector(16000, -115.0f, 200.0f);
	Receptor = GetWorld()->SpawnActor<AShipPatrol>(AShipPatrol::StaticClass(), SpawnLocation4, FRotator::ZeroRotator);
	Invoker = GetWorld()->SpawnActor<AInvoker>(AInvoker::StaticClass());
	CommandDrop = GetWorld()->SpawnActor<ACommadDrop>(ACommadDrop::StaticClass()); 
	CommandMove = GetWorld()->SpawnActor<ACommandMove>(ACommandMove::StaticClass()); 
	CommandTeleport = GetWorld()->SpawnActor<ACommandTeleport>(ACommandTeleport::StaticClass()); 
	CommandBomber = GetWorld()->SpawnActor<ACommandBomber>(ACommandBomber::StaticClass()); 
	FacadeShip->SpawnCapsules(); 

}

void AGalaga_USFX_LAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Tiempo += DeltaTime;
 	Time += DeltaTime;
//---------------------------------------------------------------------FINALEVEL COMMAND---------------------------------------------------------------------
	if (Tiempo >= 50.0f && Tiempo < 60.0f)
	{
		ExecuteCommandDrop();  
		ExecuteCommandMove();  
	}
	else if (Tiempo >= 60.0f && Tiempo < 65.0f)
	{
		ExecuteCommandTeleport();
		ExecuteCommandBomber(); 
	}
	else if (Tiempo >= 65.0f && Tiempo < 70.0f)
	{
		ExecuteCommandMove();
	}
	else if (Tiempo >= 80.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Deshaciendo ultimo comando"));
		DeshacerComando(); 
		Tiempo = 0.0f; 
	}
//---------------------------------------------------------------------LEVEL1 STRATEGY---------------------------------------------------------------------//

	if (Time >= 5.0f)
	{
		ShipYorke->SetStrategy(StrategyStraight); 
		ShipYorke->ActivarEstrategiaMovimiento(); 
	}
	
	if (Time >= 10.0f)
	{
		ShipYorke->SetStrategy(StrategyCrazy);   
		ShipYorke->ActivarEstrategiaMovimiento(); 
	}
	
	if (Time >= 15.0f)
	{
		ShipYorke->SetStrategy(StrategyAlly);
		ShipYorke->ActivarEstrategiaMovimiento();
	}
}

void AGalaga_USFX_LAB02GameMode::SpawnRagerShip()
{
	FacadeShip->SpawnRagerShips();
}

void AGalaga_USFX_LAB02GameMode::ExecuteCommandDrop()
{
	CommandDrop->SetReceptor(Receptor); 
	Invoker->SetCommand(CommandDrop); 
	Invoker->ExecuteCommand(); 
	Comandos.Add(CommandDrop);
}

void AGalaga_USFX_LAB02GameMode::ExecuteCommandMove()
{
	CommandMove->SetReceptor(Receptor);	
	Invoker->SetCommand(CommandMove);	
	Invoker->ExecuteCommand();	
	Comandos.Add(CommandMove);
}

void AGalaga_USFX_LAB02GameMode::ExecuteCommandTeleport()
{
	CommandTeleport->SetReceptor(Receptor);
	Invoker->SetCommand(CommandTeleport);
	Invoker->ExecuteCommand();
	Comandos.Add(CommandTeleport);
}

void AGalaga_USFX_LAB02GameMode::ExecuteCommandBomber()
{
	CommandBomber->SetReceptor(Receptor);  
	Invoker->SetCommand(CommandBomber); 
	Invoker->ExecuteCommand(); 
	Comandos.Add(CommandBomber); 
}

void AGalaga_USFX_LAB02GameMode::DeshacerComando()
{
	if (Comandos.Num() > 0)
	{
		UltimoComando = Comandos.Pop();
		Invoker->SetCommand(UltimoComando);   
		Invoker->UndoCommand(); 
	}
}

