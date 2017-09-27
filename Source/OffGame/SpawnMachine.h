// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "GameFramework/Actor.h"

#include "MyCharacter.h"
#include "MoveComponent.h"


#include "SpawnMachine.generated.h"

UCLASS()
class OFFGAME_API ASpawnMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* StartPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* FinPoint;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//ACharacter SpawnedUnit;

	ASpawnMachine();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void MySpawnActor();
	
};
