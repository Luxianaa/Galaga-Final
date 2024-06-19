// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandTeleport.h"
#include "ShipPatrol.h"


ACommandTeleport::ACommandTeleport()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACommandTeleport::BeginPlay()
{
	Super::BeginPlay();	
}

void ACommandTeleport::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACommandTeleport::SetReceptor(AShipPatrol* _Receptor)
{
	Receptor = _Receptor;
}

void ACommandTeleport::Execute()
{
	Receptor->FollowPawn();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("Activado, siguiendo Pawn"));
}

void ACommandTeleport::Undo()
{
	Receptor->UndoCommand("FollowPawn");
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Esta desactivando el CommandTeleport")); 
} 



