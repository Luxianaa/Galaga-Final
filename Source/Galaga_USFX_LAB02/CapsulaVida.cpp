// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida.h"
#include "Galaga_USFX_LAB02Pawn.h"
#include "FacadeShip.h"
#include "CapsulaEnergia.h"

ACapsulaVida::ACapsulaVida()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/Meshes/HealthCapsule.HealthCapsule'")); 
	mallaCapsula->SetStaticMesh(mallaC.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsule");
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaVida::OnHit);
}

void ACapsulaVida::BeginPlay()
{
	Super::BeginPlay();
	NextHandler = GetWorld()->SpawnActor<ACapsulaEnergia>(ACapsulaEnergia::StaticClass()); 
}

void ACapsulaVida::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(OtherActor);
	if (Pawn)
	{
		HandleSolicitud(Pawn); 
	}
}

void ACapsulaVida::HandleSolicitud(AGalaga_USFX_LAB02Pawn* Player)
{
	AGalaga_USFX_LAB02Pawn* Pawn = Cast<AGalaga_USFX_LAB02Pawn>(Player);
	if (Pawn && Pawn->GetVidasRestantes() <= 3)
	{
		Pawn->AumentarVida(); 
		FString Message = FString::Printf(TEXT("Vidas restantes: %d "), Pawn->GetVidasRestantes()); 
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, Message); 
		Destroy();
	}
	else if (NextHandler)
	{
		NextHandler->HandleSolicitud(Player); 
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, "Siguiente ");
	}
}

void ACapsulaVida::Drop()
{
	//FVector NewLocation = GetActorLocation() + GetActorForwardVector() *300; 
	//SetActorLocation(NewLocation);
}
