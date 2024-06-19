// Fill out your copyright notice in the Description page of Project Settings.


#include "MeshMotherShip.h"

// Sets default values
AMeshMotherShip::AMeshMotherShip()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_2.TwinStickUFO_2'"));
	MotherMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MotherMesh"));
	MotherMesh->SetupAttachment(RootComponent);
	MotherMesh->SetStaticMesh(mallaS.Object);
	RootComponent = MotherMesh;
	SetActorScale3D(FVector(3.0f, 3.0f, 3.0f)); 
}

void AMeshMotherShip::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMeshMotherShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

