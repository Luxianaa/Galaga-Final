// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaUwU.h"
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h"
#include "AComponenteMovimiento.h"


ANaveEnemigaUwU::ANaveEnemigaUwU()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_UwU.TwinStickUFO_UwU'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);	
	componenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento"));
	Vida = 1;
}
void ANaveEnemigaUwU::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaUwU::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void ANaveEnemigaUwU::ReceiveDamage()
{
	Vida--;
	if (Vida <= 0)
	{
		Destroy();
	}
}
