// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DistObj.generated.h"

UENUM(BlueprintType)
enum class ETypeOfBlock
{
	EmptBlock,
	UnDist,
	FirstHit,
	SecondHit
};

UENUM(BlueprintType)
enum class ETypeOfBonus
{
	EmptBonus,
	SpeedBonus,
	AddBallBonus
};


UCLASS()
class ARCANOID_API ADistObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADistObj();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ETypeOfBonus typeOfBonus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ETypeOfBlock typeOfBlock;

	UFUNCTION(BlueprintCallable)
	int GetTypeOfBonus();

	UFUNCTION(BlueprintCallable)
	int GetTypeOfBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
