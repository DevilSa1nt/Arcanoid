// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcanoidGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AArcanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	int64 GetMaxScore();

	UFUNCTION(BlueprintCallable)
	void SetMaxScore(int64 score);
};
