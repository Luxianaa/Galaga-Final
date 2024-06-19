// Fill out your copyright notice in the Description page of Project Settings.


#include "NasMotherShip.h"
#include "MotherShip.h"	
#include "Motor.h"
#include "MeshMotherShip.h"
#include "Propellants.h"	
#include "Shield.h"
#include "Weapons.h"

ANasMotherShip::ANasMotherShip()
{

	PrimaryActorTick.bCanEverTick = true;
}

void ANasMotherShip::BeginPlay()
{
	Super::BeginPlay();
	MotherShip = GetWorld()->SpawnActor<AMotherShip>(AMotherShip::StaticClass());  
	MotherShip->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform); 
}

void ANasMotherShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANasMotherShip::BuildMotherShipMesh()
{
	FVector Location = FVector(0, 500, 300);
	FRotator Rotation = FRotator(0.0f, 180.0f, 0.0f);
	Mesh = GetWorld()->SpawnActor<AMeshMotherShip>(AMeshMotherShip::StaticClass(), Location, Rotation);
	MotherShip->SetMotherShipMesh(Mesh,"Nas MotherShip");
}

void ANasMotherShip::BuildMotor()
{
	
	FVector Location = FVector(200, 500, 300);
	FRotator Rotation = FRotator(-90.0f, 0.0f, 0.0f);
	Motor = GetWorld()->SpawnActor<AMotor>(AMotor::StaticClass(), Location, Rotation);
	MotherShip->SetMotor(Motor,"100% Motor");
}

void ANasMotherShip::BuildShield()
{
	FVector Location = FVector(-100, 200, 90);
	FRotator Rotation = FRotator(0.0f, 90.0f, 0.0f);
	Shield = GetWorld()->SpawnActor<AShield>(AShield::StaticClass(), Location, Rotation);
	MotherShip->SetShield(Shield,"Escudo Roto");
}

void ANasMotherShip::BuildPropellants()
{
	FVector Location = FVector(200, 600, 300);
	FVector Location2 = FVector(200, 300, 200);
	FRotator Rotation = FRotator(-90.0f, 0.0f, 40.0f);
	Propellants = GetWorld()->SpawnActor<APropellants>(APropellants::StaticClass(), Location, Rotation);
	Propellants = GetWorld()->SpawnActor<APropellants>(APropellants::StaticClass(), Location2, Rotation);
	MotherShip->SetPropellants(Propellants,"Propulsores 30%");
}

void ANasMotherShip::BuildWeapons()
{
	FVector Location = FVector(-100, 500, 300);
	FRotator Rotation = FRotator(0.0f, 180.0f, 0.0f);
	Weapons = GetWorld()->SpawnActor<AWeapons>(AWeapons::StaticClass(), Location, Rotation);
	MotherShip->SetWeapons(Weapons,"1 Arma");
}

AMotherShip* ANasMotherShip::GetMotherShip()
{
	return MotherShip;
}
