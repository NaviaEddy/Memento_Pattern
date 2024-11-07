// Fill out your copyright notice in the Description page of Project Settings.

#include "MementoConcreto.h"
#include "IOriginador.h"

// Sets default values
AMementoConcreto::AMementoConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMementoConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMementoConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMementoConcreto::RestaurarEstado(IIOriginador* _originador)
{
	Originador = Cast<IIOriginador>(_originador);
	if (Originador)
	{
		Originador->GuardarEstado(this);
	}
}

