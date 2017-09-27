// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"



#include "Item.generated.h"

/**
 * 
 */
UCLASS()
class OFFGAME_API UItem : public UObject
{
	GENERATED_BODY()
public:

	UItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "item")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "item")
	int32 Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "item")
	int32 id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "item")
	FString Category;
	
};
