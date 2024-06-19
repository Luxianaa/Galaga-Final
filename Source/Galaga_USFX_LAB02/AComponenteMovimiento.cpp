// Fill out your copyright notice in the Description page of Project Settings.


#include "AComponenteMovimiento.h"
#include "NaveEnemigaEspia.h"
#include "Shield.h"

// Sets default values for this component's properties
UAComponenteMovimiento::UAComponenteMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAComponenteMovimiento::BeginPlay()
{
	Super::BeginPlay();

   // mallaNaveE = Cast<UStaticMeshComponent>(GetOwner()->GetComponentByClass(UStaticMeshComponent::StaticClass()));//

    //establecer el temporizador para las naves en 5segundos
 // GetWorld()->GetTimerManager().SetTimer(TiempoVisibilidad, this, &UAComponenteMovimiento::AparecerDesaparecerNaves, 3.0f, true);
   
  //GetWorld()->GetTimerManager().SetTimer(TiempoVisibilidad2, this, &UAComponenteMovimiento::ShieldVisibility, 3.0f, true); jiji
}


// Called every frame
void UAComponenteMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


    AActor* Parent = GetOwner();
    if (Parent)
    {
        // Obtener la posición actual de la nave
        FVector PosicionActual = Parent->GetActorLocation();

        // Definir los límite DERECHO E IZQUIERDO de movimiento
        float LimiteDerecho = 1528.0f;
        float LimiteIzquierdo = -1600.0f;

        // Definir la velocidad de movimiento horizontal
        //float VelocidadHorizontal = 800.0f; 

        // Calcular el desplazamiento horizontal para este fotograma
        float DesplazamientoHorizontal = VelocidadHorizontal * DeltaTime;

        // Verificar si la nave está moviéndose hacia derecha o izquierda

        if (DireccionMovimientoHorizontal == 1) // Movimiento hacia derecha
        {
            // Mover la nave hacia derecha
            FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal, 0.0f);
            if (NuevaPosicion.Y <= LimiteDerecho)
            {
                Parent->SetActorLocation(NuevaPosicion);
            }
            else
            {
                // Si alcanza el límite superior, cambiar la dirección de movimiento a hacia izquierda
                DireccionMovimientoHorizontal = -1;
            }
        }
        else // Movimiento hacia izquierda
        {
            // Mover la nave hacia izquierda
            FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoHorizontal, 0.0f);
            if (NuevaPosicion.Y >= LimiteIzquierdo)
            {
                Parent->SetActorLocation(NuevaPosicion);
            }
            else
            {
                // Si alcanza el límite de la izquierda, cambiar la dirección de movimiento a hacia la derecha
                DireccionMovimientoHorizontal = 1;
            }
        }
    }
}

void UAComponenteMovimiento::AparecerDesaparecerNaves()
{
    ANaveEnemigaEspia* NaveEnemiga = Cast<ANaveEnemigaEspia>(GetOwner()); 

   // NaveEnemiga = GetOwner(); 
    if (NaveEnemiga)
    {
        //Decide aleatoriamente si la nave debe ser invisible
       bool Desaparecer = FMath::RandBool();

       // Cambia la visibilidad de la malla aleatoriamente
       NaveEnemiga->SetActorHiddenInGame(!Desaparecer);
       
    }
}

void UAComponenteMovimiento::ShieldVisibility()
{
    AShield* Shield = Cast<AShield>(GetOwner());
    if (Shield)
    {
        bool Desaparecer = FMath::RandBool();

        Shield->SetActorHiddenInGame(!Desaparecer);   

       
        //Shield->SetActorHiddenInGame(false);

	}
}



