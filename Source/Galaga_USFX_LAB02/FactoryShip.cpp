// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryShip.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCurandera.h"
#include "NaveEnemigaBigPoppa.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaHacker.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaUwU.h"


AFactoryShip::AFactoryShip()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFactoryShip::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFactoryShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFactoryShip::CreateShips(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator)
{
	NaveEnemiga = nullptr; 

	if (tipoNave == "Caza")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, ZeroRotator);
	}
	else if (tipoNave == "Curandera")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaCurandera>(SpawnLocation, ZeroRotator);

	}
	else if (tipoNave == "BigPoppa")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaBigPoppa>(SpawnLocation, ZeroRotator);
	
	}
	else if (tipoNave == "Espia")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaEspia>(SpawnLocation, ZeroRotator);
		 
	}
	else if (tipoNave == "Hacker")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaHacker>(SpawnLocation, ZeroRotator);
		
	}
	else if (tipoNave == "Transporte")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, ZeroRotator);
		
	}
	else if (tipoNave == "UwU")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaUwU>(SpawnLocation, ZeroRotator); 
	
	}

	return NaveEnemiga; 
}


