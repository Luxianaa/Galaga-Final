// Fill out your copyright notice in the Description page of Project Settings.


#include "CommadDrop.h"
#include "ShipPatrol.h"


ACommadDrop::ACommadDrop()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACommadDrop::BeginPlay()
{
	Super::BeginPlay();
}

void ACommadDrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACommadDrop::SetReceptor(AShipPatrol* _Receptor)
{
	Receptor = _Receptor; 
}

void ACommadDrop::Execute()
{
	Receptor->DropCapsule();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activado, tirando Capsulas"));
}

void ACommadDrop::Undo()
{
	Receptor->UndoCommand("Drop");
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Esta desactivando el CommandDrop")); 
}

