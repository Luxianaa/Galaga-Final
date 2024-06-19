// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ICommand.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommadDrop.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ACommadDrop : public AActor, public IICommand
{
	GENERATED_BODY()
	
public:	
	ACommadDrop();

protected:
	virtual void BeginPlay() override;
private:

	class AShipPatrol* Receptor;
public:	
	virtual void Tick(float DeltaTime) override;
public:

	void SetReceptor(class AShipPatrol* _Receptor);
	virtual void Execute() override;
	virtual void Undo() override;


};
