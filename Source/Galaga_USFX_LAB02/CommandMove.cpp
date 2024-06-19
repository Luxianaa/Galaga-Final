// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandMove.h"
#include "ShipPatrol.h"

ACommandMove::ACommandMove()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACommandMove::BeginPlay()
{
	Super::BeginPlay();
}

void ACommandMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACommandMove::SetReceptor(AShipPatrol* _Receptor)
{
	Receptor = _Receptor;
}

void ACommandMove::Execute()
{
	Receptor->Move();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, TEXT("Activado, Moviendose")); 
}

void ACommandMove::Undo()
{
	Receptor->UndoCommand("Move");
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Esta desactivando el CommandMove"));*/
}
