// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyAlly.h"
#include "ShipYorke.h"
#include "CapsulaVida.h"
#include "CapsulaEnergia.h"

// Sets default values
AStrategyAlly::AStrategyAlly()
{
	PrimaryActorTick.bCanEverTick = true;

	Radio = 20.0f;
	Angulo = 0.0f; 
	Speed = 2.0f;
	Time = 0.0f;
	NumShotsFired = 0; 
	MaxShots = 10; 

}

void AStrategyAlly::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStrategyAlly::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Time += DeltaTime;

}

void AStrategyAlly::Move(AShipYorke* Yorke)
{
	Angulo += Speed * Time;
	float PosicionX = Yorke->GetActorLocation().X + Radio * FMath::Cos(Angulo);
	float PosicionY = Yorke->GetActorLocation().Y + Radio * FMath::Sin(Angulo);
	FVector NuevaPosicion = FVector(PosicionX, PosicionY, Yorke->GetActorLocation().Z);
	Yorke->SetActorLocation(NuevaPosicion); 

	if (NumShotsFired >= MaxShots)
	{
		return;
	}
	if (Time >= 4) {
		ACapsulaEnergia* Energy = GetWorld()->SpawnActor<ACapsulaEnergia>(ACapsulaEnergia::StaticClass(), GetActorLocation(), GetActorRotation());
		if (Energy)
		{
			FVector ForwardDirection = Yorke->GetActorForwardVector();
			FRotator SpawnRotation = ForwardDirection.Rotation();
			FVector SpawnLocation = Yorke->GetActorLocation();

			FRotator AdjustedRotation = SpawnRotation;
			AdjustedRotation.Pitch = 180.0f; 
			AdjustedRotation.Roll = 0.0f; 

			Energy->SetActorLocationAndRotation(SpawnLocation, AdjustedRotation);
			Energy->Drop();
			NumShotsFired++;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Disparos realizados: %d"), NumShotsFired));
		}
	}
	if (Time >= 6)
	{
		ACapsulaVida* Life = GetWorld()->SpawnActor<ACapsulaVida>(ACapsulaVida::StaticClass(), GetActorLocation(), GetActorRotation());
		 if (Life)
		 {
			FVector ForwardDirection = Yorke->GetActorForwardVector();
			FRotator SpawnRotation = ForwardDirection.Rotation();
			FVector SpawnLocation = Yorke->GetActorLocation();

			FRotator AdjustedRotation = SpawnRotation;
			AdjustedRotation.Pitch = 180.0f;
			AdjustedRotation.Roll = 0.0f;  

			Life->SetActorLocationAndRotation(SpawnLocation, AdjustedRotation);
			Life->Drop();   
			NumShotsFired++;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Disparos realizados: %d"), NumShotsFired));
		}
	}
}

