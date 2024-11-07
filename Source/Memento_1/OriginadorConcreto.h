// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IOriginador.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OriginadorConcreto.generated.h"

UCLASS()
class MEMENTO_1_API AOriginadorConcreto : public AActor, public IIOriginador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOriginadorConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void GuardarEstado(IIMemento* SalidaMemento) const override;

	void EstablecerVidas(int32 _vidas);

	int32 ObtenerVidas() const;

private:
	UPROPERTY()
	int32 Vidas;

};
