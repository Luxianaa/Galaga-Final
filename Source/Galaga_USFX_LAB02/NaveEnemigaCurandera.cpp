// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCurandera.h"

ANaveEnemigaCurandera::ANaveEnemigaCurandera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Curandera.TwinStickUFO_Curandera'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	Vida = 1;
}

void ANaveEnemigaCurandera::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);	
}

void ANaveEnemigaCurandera::ReceiveDamage()
{
		Vida--;
		if (Vida <= 0)
		{
		Destroy();
	}
}
