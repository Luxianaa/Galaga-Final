// Fill out your copyright notice in the Description page of Project Settings.


#include "Propellants.h"

APropellants::APropellants()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush_2.SM_Bush_2'")); 
	MeshPrope = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrope"));
	MeshPrope->SetupAttachment(RootComponent); 
	MeshPrope->SetStaticMesh(mallaS.Object); 
	RootComponent = MeshPrope; 
}

void APropellants::BeginPlay()
{
	Super::BeginPlay();
	
}

void APropellants::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

