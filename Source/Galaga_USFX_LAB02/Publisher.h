// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IObserver.h"
#include "Publisher.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API APublisher : public AActor
{
	GENERATED_BODY()
	
public:	
	APublisher();

protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	class AMoon* Moon;
private:
	TArray<IIObserver*> Observers;
public:
	void AddObserver(IIObserver* Observer);
	void RemoveObserver(IIObserver* Observer);
	void NotifyObservers();
	void ObserveMoon(class AMoon* _Moon);

};
