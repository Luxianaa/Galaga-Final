// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaLv1.h"

ANaveEnemigaCazaLv1::ANaveEnemigaCazaLv1()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/CazaLvl1.CazaLvl1'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	 Radio = 20.0f;
	 Angulo = 0.0f; 
	 Speed = 5.0f;
	 Vida = 1;
}

void ANaveEnemigaCazaLv1::BeginPlay()
{
		Super::BeginPlay();
}

void ANaveEnemigaCazaLv1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	Angulo += Speed * DeltaTime; 
	float PosicionX = GetActorLocation().X + Radio * FMath::Cos(Angulo);
	float PosicionY = GetActorLocation().Y + Radio * FMath::Sin(Angulo);
	FVector NuevaPosicion = FVector(PosicionX, PosicionY, GetActorLocation().Z);
	SetActorLocation(NuevaPosicion); 

	float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;
	float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
	SetActorLocation(NewLocation);

}
