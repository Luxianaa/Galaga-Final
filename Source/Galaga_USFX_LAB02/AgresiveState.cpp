// Fill out your copyright notice in the Description page of Project Settings.


#include "AgresiveState.h"
#include "HendrixShip.h"
#include "Aliens.h"


AAgresiveState::AAgresiveState()
{
	PrimaryActorTick.bCanEverTick = true;
	targetLocations.Add(FVector(15700.0f, 1485.0f, 200.0f));    // Coordenada 1 (ajustada: -300 + 16000, 1600 - 115)
	targetLocations.Add(FVector(15120.0f, 885.0f, 200.0f));     // Coordenada 2 (ajustada: -880 + 16000, 1000 - 115)
	targetLocations.Add(FVector(15490.0f, 445.0f, 200.0f));     // Coordenada 3 (ajustada: -510 + 16000, 560 - 115)
	targetLocations.Add(FVector(15120.0f, -75.0f, 200.0f));     // Coordenada 4 (ajustada: -880 + 16000, 40 - 115)
	targetLocations.Add(FVector(15490.0f, -595.0f, 200.0f));    // Coordenada 5 (ajustada: -510 + 16000, -480 - 115)
	targetLocations.Add(FVector(15120.0f, -1065.0f, 200.0f));   // Coordenada 6 (ajustada: -880 + 16000, -950 - 115)
	targetLocations.Add(FVector(15700.0f, -1715.0f, 200.0f));   // Coordenada 7 (ajustada: -300 + 16000, -1600 - 115)

    currentTargetIndex = 0;
    Speed = 1500.0f;
    NumShotsFired = 0; 
    MaxShots = 3; 
}

void AAgresiveState::BeginPlay()
{
	Super::BeginPlay();
	
}
void AAgresiveState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAgresiveState::Move(float DeltaTime)
{
	FVector newLocation = Hendrix->GetActorLocation();
	FVector targetLocation = targetLocations[currentTargetIndex];
	FVector direction = (targetLocation - newLocation).GetSafeNormal();
	float distance = FVector::Distance(targetLocation, newLocation);
	newLocation += direction * Speed * DeltaTime;

	Hendrix->SetActorLocation(newLocation);

	// Verificar si la nave ha llegado a la ubicación de destino actual
	if (distance < 10.0f)
	{
		// Mover a la siguiente ubicación de destino
		currentTargetIndex = (currentTargetIndex + 1) % targetLocations.Num();
	}

}

void AAgresiveState::Drop()
{
	if (NumShotsFired >= MaxShots)
	{
		return;
	}

	AAliens* Alien = GetWorld()->SpawnActor<AAliens>(AAliens::StaticClass(), GetActorLocation(), GetActorRotation());
	if (Alien)
	{
		FVector ForwardDirection = Hendrix->GetActorForwardVector();
		FRotator SpawnRotation = ForwardDirection.Rotation();
		FVector SpawnLocation = Hendrix->GetActorLocation();
		Alien->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
		Alien->Drop();
		NumShotsFired++;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Disparos realizados: %d"), NumShotsFired));
	}
}

void AAgresiveState::Hide()
{
}

void AAgresiveState::SetHendrix(AHendrixShip* _Hendrix)
{
	Hendrix = Cast<AHendrixShip>(_Hendrix);
	Hendrix->SetState(Hendrix->GetAgresiveState());
}

