// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeShip.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaBigPoppa.h"
#include "NaveEnemigaBigPoppaLv1.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaLv1.h"
#include "NaveEnemigaCurandera.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaLv1.h"
#include "NaveEnemigaHacker.h"
#include "NaveEnemigaHackerLv1.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteLv1.h"
#include "NaveEnemigaUwU.h"
#include "IAbsFactory.h"
#include "FactoryShipLv1.h"
#include "FactoryShip.h"
#include "FactoryCapsula.h"
#include "Kismet/GameplayStatics.h"
#include "ShipRager.h"
#include "CapsulaCrazy.h"
//Colisiones
#include "Shield.h"
#include "Galaga_USFX_LAB02Projectile.h" 
#include "ProyectilEnemigo.h"
#include "Capsula.h"
#include "Galaga_USFX_LAB02Pawn.h" 
#include "Aliens.h"
#include "Moon.h"
#include "NaveEnemiga.h"
#include "NavePruebas.h"


AFacadeShip::AFacadeShip()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFacadeShip::BeginPlay()
{
	Super::BeginPlay();


}

void AFacadeShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeShip::SpawnShipsLevel1()
{
	IIAbsFactory* factory = NewObject<AFactoryShip>(); 

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ubicacionInicialNaves = FVector(300.0f, -1600.0f, 200.0f);
		FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);
		FVector ubicacionActual = ubicacionInicialNaves;
		for (int i = 0; i < 2; i++)
		{
			ubicacionActual.Y = ubicacionInicialNaves.Y + 1000.0f;
			ubicacionActual = FVector(ubicacionInicialNaves.X, ubicacionInicialNaves.Y + 300.0f * i, ubicacionInicialNaves.Z);
			ANaveEnemiga* Nave = factory->CreateShips("Caza", World, ubicacionActual, rotacionNave);

		}
		for (int i = 0; i < 6; i++)
		{
			ubicacionActual = FVector(ubicacionInicialNaves.X, ubicacionInicialNaves.Y + 300.0f * i, ubicacionInicialNaves.Z);
			ANaveEnemiga* Nave = factory->CreateShips("Transporte", World, ubicacionActual, rotacionNave);

		}
		ubicacionActual.X = ubicacionInicialNaves.X - 250.0f;

		for (int j = 0; j < 6; j++)
		{
			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * j;
			ANaveEnemiga* Nave = factory->CreateShips("UwU", World, ubicacionActual, rotacionNave);

		}

		ubicacionActual.X = ubicacionInicialNaves.X - 500.0f;
		for (int i = 0; i < 4; i++)
		{
			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * i;
			ANaveEnemiga* Nave = factory->CreateShips("Hacker", World, ubicacionActual, rotacionNave);

		}
		ubicacionActual.X = ubicacionInicialNaves.X - 750.0f;

		for (int j = 0; j < 2; j++)
		{
			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * j;
			ANaveEnemiga* Nave = factory->CreateShips("Espia", World, ubicacionActual, rotacionNave);

		}
	}
}

void AFacadeShip::SpawnShipsLevel2()
{
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		IIAbsFactory* factory = NewObject<AFactoryShipLv1>();

		FVector ubicacionInicialNaves2 = FVector(7500.0f, -2000.0f, 200.0f);
		FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);
		FVector ubicacionActual = ubicacionInicialNaves2; 

		ubicacionActual.X = ubicacionInicialNaves2.X - 250.0f;
		for (int i = 0; i < 4; i++)
		{
			ubicacionActual.Y = ubicacionInicialNaves2.Y + 300.0f * i;
			ANaveEnemiga* Nave = factory->CreateShips("CazaLv1", World, ubicacionActual, rotacionNave);

		}
		ubicacionActual.X = ubicacionInicialNaves2.X - 500.0f;
		for (int j = 0; j < 4; j++)
		{
			ubicacionActual.Y = ubicacionInicialNaves2.Y + 300.0f * j;
			ANaveEnemiga* Nave = factory->CreateShips("HackerLv1", World, ubicacionActual, rotacionNave);

		}
		ubicacionActual.X = ubicacionInicialNaves2.X - 750.0f;
		for (int i = 0; i < 5; i++)
		{
			ubicacionActual.Y = ubicacionInicialNaves2.Y + 300.0f * i;
			ANaveEnemiga* Nave = factory->CreateShips("EspiaLv1", World, ubicacionActual, rotacionNave);

		}
		ubicacionActual.X = ubicacionInicialNaves2.X - 1000.0f;
		for (int j = 0; j < 5; j++)
		{
			ubicacionActual.Y = ubicacionInicialNaves2.Y + 300.0f * j;
			ANaveEnemiga* Nave = factory->CreateShips("BigPoppaLv1", World, ubicacionActual, rotacionNave);
		
		}
		ubicacionActual.X = ubicacionInicialNaves2.X - 1250.0f;
		for (int i = 0; i < 5; i++)
		{
			ubicacionActual.Y = ubicacionInicialNaves2.Y + 300.0f * i;
			ANaveEnemiga* Nave = factory->CreateShips("TransporteLv1", World, ubicacionActual, rotacionNave);
		}
	}
}

void AFacadeShip::SpawnCapsules()
{
	FVector SpawnLocation = FVector(FMath::RandRange(12000.0f, 12600.0f), FMath::RandRange(-115.0f, 200.0f), 200.0f);

	FRotator SpawnRotation = FRotator(0.0f, 0.0f, .0f);
	if (FMath::RandBool())
	{
		AFactoryCapsula::GenerarCapsulas("Vida", GetWorld(), SpawnLocation, SpawnRotation);
	}
	else if (FMath::RandBool())
	{
		AFactoryCapsula::GenerarCapsulas("Energia", GetWorld(), SpawnLocation, SpawnRotation);
	}
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &AFacadeShip::SpawnCapsules, 3.0f, true);
}

void AFacadeShip::SpawnRagerShips()
{
	FVector SpawnLocation = FVector(6700.0f, -3400.0f, 200.0f);
	FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);
	AShipRager* ShipRager = GetWorld()->SpawnActor<AShipRager>(SpawnLocation, SpawnRotation);

}

void AFacadeShip::SpawnShipsFinal()
{
	FVector SpawnLocation = FVector(15000.0f, -250.0f, 200.0f);
	FRotator SpawnRotation = FRotator(0.0f, 180.0f,0.0f);
	for (int i = 0; i < 3; i++)
	{
		ANavePruebas* Nave = GetWorld()->SpawnActor<ANavePruebas>(SpawnLocation, SpawnRotation);
		SpawnLocation.Y += 1500.0f;
	}
}

void AFacadeShip::CollideProjectile(AActor* OtherActor)
{
	ANaveEnemiga* Nave = Cast<ANaveEnemiga>(OtherActor);
	if (Nave)
	{
		FString Message = FString::Printf(TEXT("¡Nave enemiga destruida! "));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, Message);
		Nave->ReceiveDamage(); 
	}
}

void AFacadeShip::CollideShield(AActor* OtherActor)
{
	AShield* Shield = Cast<AShield>(OtherActor);
	if (Shield)
	{
		FString Message = FString::Printf(TEXT("¡Escudo destruido destruida! Puntuacion:%c"));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, Message);

		Shield->Destroy();
	}
}

void AFacadeShip::CollideCrazyCapsule(AActor* OtherActor)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Purple, TEXT("Capsula comida"));
		Pawn->MoveCrazy();
		Pawn->SetPlayerInputEnabled(false);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Orange, TEXT("Sin Movimiento"));
		return;
	}
}

void AFacadeShip::CollideEnergyCapsule(AActor* OtherActor)
{

}

void AFacadeShip::CollideEnemyProjectile(AActor* OtherActor)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{
		Pawn->RecibirImpacto();
		FString Message = FString::Printf(TEXT("Vidas restantes: %d"), Pawn->GetVidasRestantes());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, Message);
	}

}

void AFacadeShip::CollideLifeCapsule(AActor* OtherActor)
{


}

void AFacadeShip::CollideAliens(AActor* OtherActor)
{
	AAliens* Aliens = Cast<AAliens>(OtherActor);
	if (Aliens)
	{
		Aliens->RecibirImpacto(); 
	}
}

void AFacadeShip::CollideRagerShirp(AActor* OtherActor)
{
	AShipRager* ShipRager = Cast<AShipRager>(OtherActor);
	if (ShipRager)
	{
		ShipRager->RecibirImpacto();
	}
}

void AFacadeShip::CollideNavesPruebas(AActor* OtherActor)
{
	ANavePruebas* Nave = Cast<ANavePruebas>(OtherActor);
	if (Nave)
	{
		
		Nave->RecibirDamage();
	}
}


