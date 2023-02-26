// Fill out your copyright notice in the Description page of Project Settings.

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// My Libraries
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include "GridBPFunctionLibrary.h"

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Unreal Libraries
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include "Kismet/GameplayStatics.h"

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Definitions
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int32 UGridBPFunctionLibrary::GetNumberOfInstances(UObject* WorldContextObject,
												   TSubclassOf <AActor> ActorClass)
{
	TArray< AActor* > InstancesFound;

	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, ActorClass, InstancesFound);

	return InstancesFound.Num();
}