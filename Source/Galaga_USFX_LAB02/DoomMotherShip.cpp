// Fill out your copyright notice in the Description page of Project Settings.


#include "DoomMotherShip.h"
#include "MotherShip.h"	
#include "Motor.h"
#include "Propellants.h"
#include "Shield.h"
#include "Weapons.h"
#include "MeshMotherShip.h"



ADoomMotherShip::ADoomMotherShip()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADoomMotherShip::BeginPlay()
{
	Super::BeginPlay();
	MotherShip = GetWorld()->SpawnActor<AMotherShip>(AMotherShip::StaticClass());  
	MotherShip->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform); 
}


// Called every frame
void ADoomMotherShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoomMotherShip::BuildMotherShipMesh()
{
	FVector Location = FVector(-300, -700, 300);
	FRotator Rotation = FRotator(0.0f, 180.0f, 0.0f);
	Mesh = GetWorld()->SpawnActor<AMeshMotherShip>(AMeshMotherShip::StaticClass(), Location, Rotation);
	MotherShip->SetMotherShipMesh(Mesh,"Doom MotherShip");
} 

void ADoomMotherShip::BuildMotor()
{
	FVector Location = FVector(-300, -600, 300);
	FRotator Rotation = FRotator(-90.0f, 0.0f, 0.0f);
	Motor = GetWorld()->SpawnActor<AMotor>(AMotor::StaticClass(), Location, Rotation);
	MotherShip->SetMotor(Motor,"20% Motor");
}

void ADoomMotherShip::BuildShield()
{
	FVector Location = FVector(-500, -800, 90);
	FRotator Rotation = FRotator(0.0f, 90.0f, 0.0f);
	Shield = GetWorld()->SpawnActor<AShield>(AShield::StaticClass(), Location, Rotation);
	MotherShip->SetShield(Shield,"Escudo bajo");
}

void ADoomMotherShip::BuildPropellants()
{
	FVector Location = FVector(-300, -600, 300);
	FRotator Rotation = FRotator(-90.0f, 0.0f, 40.0f);
	Propellants = GetWorld()->SpawnActor<APropellants>(APropellants::StaticClass(), Location, Rotation);
	MotherShip->SetPropellants(Propellants,"1 Propulsor");
}


void ADoomMotherShip::BuildWeapons()
{
	FVector Location = FVector(-300, -600, 300);
	FRotator Rotation = FRotator(0.0f, 180.0f, 0.0f);
	FVector Location2 = FVector(0, -200, 300);
	Weapons = GetWorld()->SpawnActor<AWeapons>(AWeapons::StaticClass(), Location, Rotation);
	MotherShip->SetWeapons(Weapons,"Sin Armamento");
}

AMotherShip* ADoomMotherShip::GetMotherShip()
{
	return MotherShip;
}



