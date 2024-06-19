// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyStraight.h"
#include "NaveEnemiga.h"
#include "ShipYorke.h"
#include "YorkProjectile.h"
#include "NavePruebas.h"


AStrategyStraight::AStrategyStraight()
{
	PrimaryActorTick.bCanEverTick = true;


    Time = 0.0f;
    LimiteDerecho = 1528.0f;
    LimiteIzquierdo = -1600.0f;
    VelocidadHorizontal = 800.0f;
    DireccionMovimientoHorizontal = 1;
}

void AStrategyStraight::BeginPlay()
{
	Super::BeginPlay();
}

void AStrategyStraight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Time += DeltaTime;
}

void AStrategyStraight::Move(AShipYorke* Yorke)
{
    FVector PosicionActual = Yorke->GetActorLocation();
    float DesplazamientoHorizontal = VelocidadHorizontal * Yorke->GetWorld()->DeltaTimeSeconds;

    if (DireccionMovimientoHorizontal == 1) 
    {
        FVector NuevaPosicion = PosicionActual + FVector(DesplazamientoHorizontal, 0.0f, 0.0f);
        if (NuevaPosicion.X <= LimiteDerecho)
        {
            Yorke->SetActorLocation(NuevaPosicion);
        }
        else
        {

            DireccionMovimientoHorizontal = -1;
        }
    }
    else 
    {
        FVector NuevaPosicion = PosicionActual - FVector(DesplazamientoHorizontal, 0.0f, 0.0f);
        if (NuevaPosicion.X >= LimiteIzquierdo)
        {
            Yorke->SetActorLocation(NuevaPosicion);
        }
        else
        {
            DireccionMovimientoHorizontal = 1;
        }
    }
}






