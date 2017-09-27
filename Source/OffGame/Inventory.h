// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "item.h"

#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class OFFGAME_API UInventory : public UObject
{
	GENERATED_BODY()

public:
	
	UInventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<UItem* > Items;
	
};
