// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IMemento.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MementoConcreto.generated.h"

UCLASS()
class MEMENTO_1_API AMementoConcreto : public AActor, public IIMemento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMementoConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY()
	int32 Vidas;

	void RestaurarEstado(IIOriginador* _originador) override;

protected:
	IIOriginador* Originador;

};
