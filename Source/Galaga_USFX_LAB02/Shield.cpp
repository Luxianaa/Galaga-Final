// Fill out your copyright notice in the Description page of Project Settings.


#include "Shield.h"
#include "Galaga_USFX_LAB02Projectile.h" 

// Sets default values
AShield::AShield()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> meshShield(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x400.Wall_400x400'"));
	ShieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
	ShieldMesh->SetupAttachment(RootComponent);
	ShieldMesh->SetStaticMesh(meshShield.Object);
	SetActorScale3D(FVector(20.0f, 20.0f, 20.0f));
	RootComponent = ShieldMesh;
	PrimaryActorTick.bCanEverTick = true;

}
void AShield::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TiempoVisibilidad2, this, &AShield::SetVisibility, 2.0f, true);

}

void AShield::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AShield::SetVisibility()
{
	bool Desaparecer = FMath::RandBool();
	
	SetActorHiddenInGame(!Desaparecer);
}




