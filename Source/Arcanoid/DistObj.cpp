// Fill out your copyright notice in the Description page of Project Settings.


#include "DistObj.h"

// Sets default values
ADistObj::ADistObj()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

int ADistObj::GetTypeOfBonus()
{
	typeOfBonus = ETypeOfBonus::EmptBonus;

	int bonus = rand() % 100 + 1;

	if (bonus <= 50)
	{
		bonus = 1;
	}
	else
	{
		bonus = 2;
	}

	typeOfBonus = (ETypeOfBonus)bonus;

	return (int)typeOfBonus;
}

int ADistObj::GetTypeOfBlock()
{
	typeOfBlock = ETypeOfBlock::EmptBlock;

	int type = rand() % 100 + 1;

	if (type <= 10)
	{
		type = 1;
	}
	else
	{
		type = 2;
	}

	typeOfBlock = (ETypeOfBlock)type;

	return (int)typeOfBlock;
}

// Called when the game starts or when spawned
void ADistObj::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADistObj::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

