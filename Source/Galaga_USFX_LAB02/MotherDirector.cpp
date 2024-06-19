// Fill out your copyright notice in the Description page of Project Settings.


#include "MotherDirector.h"


AMotherDirector::AMotherDirector()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AMotherDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMotherDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

}

void AMotherDirector::ConstructShips()
{
	if(ShipBuilder)
	{
		ShipBuilder->BuildMotherShipMesh();  
		ShipBuilder->BuildMotor(); 
		ShipBuilder->BuildShield();
		ShipBuilder->BuildPropellants(); 
		ShipBuilder->BuildWeapons();
	}

}


void AMotherDirector::SetBuilder(AActor* Builder)
{
	ShipBuilder = Cast<IIBuilderMotherShip>(Builder);
}

AMotherShip* AMotherDirector::GetMotherShip()
{
	return ShipBuilder->GetMotherShip();
}
