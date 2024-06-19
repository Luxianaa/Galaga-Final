// Fill out your copyright notice in the Description page of Project Settings.


#include "Invoker.h"
#include "ICommand.h"


// Sets default values
AInvoker::AInvoker()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AInvoker::BeginPlay()
{
	Super::BeginPlay();
}

void AInvoker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInvoker::SetCommand(IICommand* NewCommand)
{
	Command = NewCommand;
}

void AInvoker::ExecuteCommand()
{
	Command->Execute();
}

void AInvoker::UndoCommand()
{
	Command->Undo();
}

