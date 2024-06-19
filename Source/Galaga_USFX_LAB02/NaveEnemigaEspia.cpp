// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
#include "AComponenteMovimiento.h"



ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Espia.TwinStickUFO_Espia'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
    VelocidadVertical = 1.0f;
    PrimaryActorTick.bCanEverTick = true;
    ComponenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento")); 


    Vida = 1;
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaEspia::ReceiveDamage()
{
    Vida--;
    if (Vida <= 0)
    {
		Destroy();
	}
}
