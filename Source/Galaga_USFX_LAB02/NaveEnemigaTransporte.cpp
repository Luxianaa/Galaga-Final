// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "Aliens.h"
#include "AComponenteMovimiento.h" 


ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Transporte.TwinStickUFO_Transporte'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
     VelocidadVertical = 1.0f;
     componenteMovimiento = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("ComponenteMovimiento"));
     Vida = 2;
}


void ANaveEnemigaTransporte::FireProjectile()
{ 
    AAliens* Alien = GetWorld()->SpawnActor<AAliens>(AAliens::StaticClass(), GetActorLocation(), GetActorRotation());
    if (Alien)
	{
        FVector ForwardDirection = GetActorForwardVector();

        FRotator SpawnRotation = ForwardDirection.Rotation();

        FVector SpawnLocation = GetActorLocation();
        Alien->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);

        Alien->Drop(); 
	
	}

}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporte::ReceiveDamage()
{
    Vida--;
    if (Vida <= 0)
    {
		Destroy();
	}
}
