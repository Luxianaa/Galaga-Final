// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyDeluxe.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "Kismet/GameplayStatics.h"

AStrategyDeluxe::AStrategyDeluxe()
{

	PrimaryActorTick.bCanEverTick = true;

}
void AStrategyDeluxe::BeginPlay()
{
	Super::BeginPlay(); 
}

void AStrategyDeluxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyDeluxe::MoveFireHide()
{
	Pawn = Cast<AGalaga_USFX_LAB02Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));  
		Pawn->SetActorHiddenInGame(true); 
		Pawn->SetActorEnableCollision(false);  
		UE_LOG(LogTemp, Warning, TEXT("Pawn is now hidden")); 
}

