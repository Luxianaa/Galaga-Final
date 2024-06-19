// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ICommand.h"
#include "CommandTeleport.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API ACommandTeleport : public AActor, public IICommand
{
	GENERATED_BODY()
	
public:	
	ACommandTeleport();

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
