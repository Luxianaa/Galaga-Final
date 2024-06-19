// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Kismet/GameplayStatics.h" 
#include "Galaga_USFX_LAB02Pawn.h"  

// Sets default values
ACapsula::ACapsula()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule_2.Shape_NarrowCapsule_2'")); 
	mallaCapsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapsulaMesh")); 
	mallaCapsula->SetupAttachment(RootComponent);
	mallaCapsula->SetStaticMesh(mallaC.Object); 
	RootComponent = mallaCapsula;
	PrimaryActorTick.bCanEverTick = true;

}

void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsula::HandleSolicitud(AGalaga_USFX_LAB02Pawn* Player)
{
	NextHandler->HandleSolicitud(Player); 
}

void ACapsula::SetNextHandler(IIHandleCapsules* Next)
{
	NextHandler = Next;
}




