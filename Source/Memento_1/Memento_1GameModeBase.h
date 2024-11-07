// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Memento_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MEMENTO_1_API AMemento_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMemento_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AOriginadorConcreto* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACuidador* Cuidador;

public:
	void GuardarJuego();

	void CargarJuego();
	
};
