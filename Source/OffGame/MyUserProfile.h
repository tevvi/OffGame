// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.h"
#include "MyUserProfile.generated.h"

/**
 * 
 */
UCLASS()
class OFFGAME_API UMyUserProfile : public UObject
{
	GENERATED_BODY()
	
public:

	UMyUserProfile();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UserProfile")
	UInventory* UserInventory;
};
