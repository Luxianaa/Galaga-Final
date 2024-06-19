// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaHacker.h"
#include "AComponenteMovimiento.h"

ANaveEnemigaHacker::ANaveEnemigaHacker()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Hacker.TwinStickUFO_Hacker'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object); 
	componenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento"));
	Vida = 1;
}

void ANaveEnemigaHacker::BeginPlay()
{
		Super::BeginPlay();
}

void ANaveEnemigaHacker::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaHacker::ReceiveDamage()
{
	Vida--;
	if (Vida <= 0)
	{
		Destroy();
	}
}
