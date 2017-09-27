// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnMachine.h"


// Sets default values
ASpawnMachine::ASpawnMachine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("mesh");
	StartPoint = CreateDefaultSubobject<USceneComponent>("BegPoint");
	FinPoint = CreateDefaultSubobject<USceneComponent>("FigPoint");
	//StaticMesh'/Engine/BasicShapes/Cube.Cube' 
	ConstructorHelpers::FObjectFinder<UStaticMesh>loadedMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (loadedMesh.Object)
		Mesh->SetStaticMesh(loadedMesh.Object);
	RootComponent =  Mesh;
}

// Called when the game starts or when spawned
void ASpawnMachine::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TimerH;
	//ASpawnMachine::MySpawnActor();
	GetWorldTimerManager().SetTimer(TimerH, this, &ASpawnMachine::MySpawnActor, 5, true);
}

// Called every frame
void ASpawnMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnMachine::MySpawnActor()
{
	AActor* MyChar = this->GetWorld()->SpawnActor(AMyCharacter::StaticClass(), &(StartPoint->GetComponentTransform()));//GetWorld()->SpawnActor(, StartPoint->ComponentToWorld);
	UMoveComponent* MoveComonent_add = NewObject<UMoveComponent>(MyChar, UMoveComponent::StaticClass(), TEXT("MoveComponent"));
	MoveComonent_add->RegisterComponent();
	MoveComonent_add->FinallyPoint = FinPoint->GetComponentLocation();
}

