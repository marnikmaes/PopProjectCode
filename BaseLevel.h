// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseLevel.generated.h"


//forward declaration so we don't have to use includes later on 
class UBoxComponent;


UCLASS()
class ENDLESSRUNNERGAME_API ABaseLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	//the created component trigger can read and written to and from anywhere 
	//catagory means we can look for it under the name "My Triggers"
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Triggers")
		UBoxComponent* Trigger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Triggers")
		UBoxComponent* SpawnLocation;

public:
	UBoxComponent* GetTrigger();
	UBoxComponent* GetSpawnLocation();

};
