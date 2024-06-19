// Fill out your copyright notice in the Description page of Project Settings.


#include "Moon.h"
#include "Galaga_USFX_LAB02Pawn.h"

AMoon::AMoon()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mallamoon(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickProjectile_2.TwinStickProjectile_2'"));
	mallamoon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoonMesh"));
	mallamoon->SetStaticMesh(Mallamoon.Object);  
	mallamoon->SetupAttachment(RootComponent);
	RootComponent = mallamoon; 
	SetActorScale3D(FVector(10.0f, 10.0f, 10.0f));
}

void AMoon::BeginPlay()
{
	Super::BeginPlay();	
	
}

void AMoon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Tiempo += GetWorld()->GetDeltaSeconds();
}



