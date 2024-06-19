	// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBigPoppa.h"
#include "AComponenteMovimiento.h"

ANaveEnemigaBigPoppa::ANaveEnemigaBigPoppa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_BigPoppa.TwinStickUFO_BigPoppa'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	componenteMovimiento= CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento"));
	Vida = 1;
}

void ANaveEnemigaBigPoppa::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaBigPoppa::ReceiveDamage()
{
	Vida--; 
	if (Vida <= 0) 
	{
		Destroy(); 
	} 
}

