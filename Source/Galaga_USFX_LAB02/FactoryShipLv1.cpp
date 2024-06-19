// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryShipLv1.h"
#include "NaveEnemigaCazaLv1.h"
#include "NaveEnemigaBigPoppaLv1.h"
#include "NaveEnemigaEspiaLv1.h"
#include "NaveEnemigaHackerLv1.h"
#include "NaveEnemigaTransporteLv1.h"



AFactoryShipLv1::AFactoryShipLv1()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFactoryShipLv1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFactoryShipLv1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFactoryShipLv1::CreateShips(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator ZeroRotator)
{
	ANaveEnemiga* NaveEnemiga = nullptr;

	if (tipoNave == "CazaLv1")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaCazaLv1>(SpawnLocation, ZeroRotator);
		  
	}
	else if (tipoNave == "BigPoppaLv1")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaBigPoppaLv1>(SpawnLocation, ZeroRotator); 
	}
	else if (tipoNave == "EspiaLv1")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaEspiaLv1>(SpawnLocation, ZeroRotator); 
	}
	else if (tipoNave == "HackerLv1")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaHackerLv1>(SpawnLocation, ZeroRotator); 
	}
	else if (tipoNave == "TransporteLv1")
	{
		NaveEnemiga = World->SpawnActor<ANaveEnemigaTransporteLv1>(SpawnLocation, ZeroRotator); 
	}

	return NaveEnemiga; 
} 