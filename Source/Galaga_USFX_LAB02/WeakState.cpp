// Fill out your copyright notice in the Description page of Project Settings.


#include "WeakState.h"
#include "HendrixShip.h"

AWeakState::AWeakState()
{
	PrimaryActorTick.bCanEverTick = true;
	TargetLocations.Add(FVector(0.0f, 0.0f, 200.0f));   // Punto A 
	TargetLocations.Add(FVector(1000.0f, 500.0f, 200.0f)); // Punto B
	TargetLocations.Add(FVector(0.0f, 1000.0f, 200.0f)); // Punto C 
	TargetLocations.Add(FVector(-1000.0f, 500.0f, 200.0f)); // Punto D   
	TargetLocations.Add(FVector(0.0f, 0.0f, 200.0f));   // De vuelta a Punto A  
	CurrentTargetIndex = 0;   
	Speed = 900.0f;  
	NumShotsFired = 0; 
	MaxShots = 3;  
}

void AWeakState::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TiempoVisibilidad, this, &AWeakState::Hide, 1.0f, true); 
}

void AWeakState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeakState::Move(float DeltaTime)
{ 
	FVector newLocation = Hendrix->GetActorLocation(); 
	FVector targetLocation = TargetLocations[CurrentTargetIndex]; 
	FVector direction = (targetLocation - newLocation).GetSafeNormal(); 
	float distance = FVector::Distance(targetLocation, newLocation);
	newLocation += direction * Speed * DeltaTime;

	Hendrix->SetActorLocation(newLocation);

	if (distance < 10.0f)
	{
		CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetLocations.Num(); 
	}
}

void AWeakState::Drop()
{
}

void AWeakState::Hide()
{
	if(Hendrix)
	{
		bool Desaparecer = FMath::RandBool();

		Hendrix->SetActorHiddenInGame(!Desaparecer);
	}
}

void AWeakState::SetHendrix(AHendrixShip* _Hendrix)
{
	Hendrix = Cast<AHendrixShip>(_Hendrix);
	Hendrix->SetState(Hendrix->GetWeakState());
}

