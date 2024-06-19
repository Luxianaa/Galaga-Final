// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryCapsula.h"
#include "CapsulaEnergia.h"
#include "CapsulaVida.h"
#include "CapsulaCrazy.h"

AFactoryCapsula::AFactoryCapsula()
{
	PrimaryActorTick.bCanEverTick = true;
}

ACapsula* AFactoryCapsula::GenerarCapsulas(FString tipoCapsula, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector SpawnLocat = SpawnLocation; 
	if (tipoCapsula == "Energia")
	{
		ACapsulaEnergia* CapsulaEnergia = World->SpawnActor<ACapsulaEnergia>(SpawnLocat, SpawnRotation); 

		GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Capsula Energia"));
		return CapsulaEnergia; 
	}
	else if (tipoCapsula == "Vida")
	{
		ACapsulaVida* CapsulaVida = World->SpawnActor<ACapsulaVida>(SpawnLocat, SpawnRotation);

		GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Capsula Vida"));
		return CapsulaVida; 
	}
	else if (tipoCapsula == "Crazy")
	{
		ACapsulaCrazy* CapsulaCrazy = World->SpawnActor<ACapsulaCrazy>(SpawnLocat, SpawnRotation);

		GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Capsula Crazy"));
		return CapsulaCrazy; 
	}
	return nullptr;
}

void AFactoryCapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFactoryCapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

