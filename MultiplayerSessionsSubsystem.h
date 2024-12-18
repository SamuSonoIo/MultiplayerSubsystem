// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MultiplayerSessionsSubsystem.generated.h"
/**
 * 
 */
UCLASS()
class COOPADVENTURE_API UMultiplayerSessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UMultiplayerSessionsSubsystem();

	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;

	UFUNCTION(BlueprintCallable)
	void CreateServer(FString ServerName);
	UFUNCTION(BlueprintCallable)
	void FindServer(FString ServerName);
	
	void OnCreateSessionComplete(FName SessionName, bool WasSuccessful);

	IOnlineSessionPtr SessionInterface;
};
