// Fill out your copyright notice in the Description page of Project Settings.


#include "Motor.h"

AMotor::AMotor()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone_2.Shape_Cone_2'"));
	MeshMotor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMotor"));
	MeshMotor->SetupAttachment(RootComponent);
	MeshMotor->SetStaticMesh(mallaS.Object);
	SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
	RootComponent = MeshMotor;

}

void AMotor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMotor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

