// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cuidador.generated.h"

UCLASS()
class MEMENTO_1_API ACuidador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACuidador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Cuidador")
	class AMementoConcreto* Memento;

	UPROPERTY(VisibleAnywhere, Category = "Cuidador")
	class AOriginadorConcreto* Originador;

public:
	void Guardar(AOriginadorConcreto* _originador);
	void Cargar(AOriginadorConcreto* _originador);

};
