// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Aliens.h"
#include "AComponenteMovimiento.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Caza.TwinStickUFO_Caza'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	componenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento"));
	Vida = 2;
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaCaza::Drops()
{
	/*FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);*/
}



void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaCaza::ReceiveDamage()
{
	Vida--;
	if (Vida <= 0)
	{
		Destroy();
	}
}
