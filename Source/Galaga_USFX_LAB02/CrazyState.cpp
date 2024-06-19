// Fill out your copyright notice in the Description page of Project Settings.


#include "CrazyState.h"
#include "HendrixShip.h"

ACrazyState::ACrazyState()
{
	PrimaryActorTick.bCanEverTick = true;
	Radio = 1500.0f; 
	Angulo = 0.0f;
	Speed = 2.0f;
}

void ACrazyState::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACrazyState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrazyState::Move(float DeltaTime)
{
	Angulo += Speed * DeltaTime;

	float NuevaX = Hendrix->GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime; 
	float NuevaY = Hendrix->GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	FVector NewLocation = FVector(NuevaX, NuevaY, Hendrix->GetActorLocation().Z); 
	Hendrix->SetActorLocation(NewLocation); 
}

void ACrazyState::Drop()
{
}

void ACrazyState::Hide()
{
}

void ACrazyState::SetHendrix(AHendrixShip* _Hendrix)
{
	Hendrix = Cast<AHendrixShip>(_Hendrix);
	Hendrix->SetState(Hendrix->GetCrazyState());
}

