// Fill out your copyright notice in the Description page of Project Settings.
#include "OriginadorConcreto.h"
#include "MementoConcreto.h"

// Sets default values
AOriginadorConcreto::AOriginadorConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Vidas = 5;

}

// Called when the game starts or when spawned
void AOriginadorConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOriginadorConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOriginadorConcreto::GuardarEstado(IIMemento* SalidaMemento) const
{
	AMementoConcreto* Memento = Cast<AMementoConcreto>(SalidaMemento);
	if (Memento)
	{
		Memento->Vidas = Vidas;
	}
}

void AOriginadorConcreto::EstablecerVidas(int32 _vidas)
{
	Vidas = _vidas;
}

int32 AOriginadorConcreto::ObtenerVidas() const
{
	return Vidas;
}

