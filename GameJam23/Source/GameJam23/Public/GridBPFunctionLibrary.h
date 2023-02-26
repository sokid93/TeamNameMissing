// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Unreal Libraries
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GridBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAM23_API UGridBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GridLibrary", meta = (WorldContext = "WorldContextObject"))
	static int32 GetNumberOfInstances(UObject* WorldContextObject, TSubclassOf <AActor> ActorClass);

};
