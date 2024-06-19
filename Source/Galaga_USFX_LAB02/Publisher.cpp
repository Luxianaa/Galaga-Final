// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "IObserver.h"
#include "Moon.h"

APublisher::APublisher()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Moon)
	{
		if (Moon->GetTiempo() > 5 && Moon->GetTiempo() < 10)  
		{
			NotifyObservers(); 
		}
	}
}

void APublisher::AddObserver(IIObserver* Observer)
{
	if (Observer)
	{
		Observers.Add(Observer); 
	}
	
}

void APublisher::RemoveObserver(IIObserver* Observer)
{
	Observers.Remove(Observer);
}

void APublisher::NotifyObservers()
{
	for (IIObserver* Observer : Observers) 
	{
		if (Observer) 
		{ 
			Observer->Update(); 
		} 
	} 
}

void APublisher::ObserveMoon(AMoon* _Moon)
{
	Moon = _Moon; 
	GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Moon observed by Publisher"));

}


