// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ICommand.h"
#include "Invoker.generated.h"

UCLASS()
class GALAGA_USFX_LAB02_API AInvoker : public AActor
{
	GENERATED_BODY()
	
public:	
	AInvoker();

protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
private:

	class IICommand* Command;
public:

	void SetCommand(class IICommand* NewCommand);
	void ExecuteCommand();
	void UndoCommand();

};
