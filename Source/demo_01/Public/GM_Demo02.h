// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_Demo02.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_01_API AGM_Demo02 : public AGameMode
{
	GENERATED_BODY()
	AGM_Demo02();

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
 