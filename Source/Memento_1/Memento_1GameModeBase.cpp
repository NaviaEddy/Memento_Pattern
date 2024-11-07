// Copyright Epic Games, Inc. All Rights Reserved.
#include "Memento_1GameModeBase.h"
#include "OriginadorConcreto.h"
#include "Cuidador.h"

AMemento_1GameModeBase::AMemento_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMemento_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Jugador = GetWorld()->SpawnActor<AOriginadorConcreto>(AOriginadorConcreto::StaticClass());
	Cuidador = GetWorld()->SpawnActor<ACuidador>(ACuidador::StaticClass());

	int32 Vidas = Jugador->ObtenerVidas();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Vidas: %d"), Vidas));

	GuardarJuego();
	CargarJuego();

}

void AMemento_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMemento_1GameModeBase::GuardarJuego()
{
	if (Jugador && Cuidador) {
		Jugador->EstablecerVidas(7);
		Cuidador->Guardar(Jugador);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Juego Guardado")));

		int32 Vidas = Jugador->ObtenerVidas();
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Vidas: %d"), Vidas));	
	}
}

void AMemento_1GameModeBase::CargarJuego()
{
	if (Jugador && Cuidador) {
		Cuidador->Cargar(Jugador);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Juego Cargado")));

		int32 Vidas = Jugador->ObtenerVidas();
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Vidas: %d"), Vidas));
	}
}
