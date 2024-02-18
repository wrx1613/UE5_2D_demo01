// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Demo02.h"

#include "BP_Serena_1.h"
#include "PC_Demo02.h"

AGM_Demo02::AGM_Demo02()
{
	DefaultPawnClass = ABP_Serena_1::StaticClass();
	PlayerControllerClass = APC_Demo02::StaticClass();
}

void AGM_Demo02::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("This is an Example on-screen debug message."));
	}
}

void AGM_Demo02::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AGM_Demo02::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}
