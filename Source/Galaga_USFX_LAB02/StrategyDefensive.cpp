// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyDefensive.h"
#include "Galaga_USFX_LAB02Pawn.h" 
#include "CapsulaVida.h"
#include "Kismet/GameplayStatics.h" 


AStrategyDefensive::AStrategyDefensive()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AStrategyDefensive::BeginPlay()
{
	Super::BeginPlay();
}

void AStrategyDefensive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStrategyDefensive::MoveFireHide()
{
	Pawn = Cast<AGalaga_USFX_LAB02Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Pawn->MoveSpeed = +900.0f;  
	Pawn->FireRate = 2.0f; 

	ACapsulaVida* Life = GetWorld()->SpawnActor<ACapsulaVida>(ACapsulaVida::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Life)
	{
		FVector ForwardDirection = Pawn->GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = Pawn->GetActorLocation();

		FRotator AdjustedRotation = SpawnRotation;
		AdjustedRotation.Pitch = 180.0f;
		AdjustedRotation.Roll = 0.0f;  

		Life->SetActorLocationAndRotation(SpawnLocation, AdjustedRotation);
		Life->Drop();
	} 
}

