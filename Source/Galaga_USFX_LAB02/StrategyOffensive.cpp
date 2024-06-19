// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyOffensive.h"
#include "Galaga_USFX_LAB02Pawn.h" 
#include "Kismet/GameplayStatics.h" 

AStrategyOffensive::AStrategyOffensive()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AStrategyOffensive::BeginPlay()
{
	Super::BeginPlay();
	
}
void AStrategyOffensive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

}

void AStrategyOffensive::MoveFireHide()
{
	Pawn = Cast<AGalaga_USFX_LAB02Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Pawn->MoveSpeed = +3000.0f; 
	Pawn->FireRate = 0.1f; 
	Pawn->Teleport2(); 
}

