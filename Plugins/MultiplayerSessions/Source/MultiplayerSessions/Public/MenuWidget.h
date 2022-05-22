// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.generated.h"

class UButton;

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void MenuSetup();

protected:

	virtual bool Initialize() override;

private:

	UPROPERTY(meta = (BindWidget))
	UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	// Subsystem for designed sessions functionality
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;
};
