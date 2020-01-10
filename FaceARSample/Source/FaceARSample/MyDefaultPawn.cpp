// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDefaultPawn.h"

void AMyDefaultPawn::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	//GetWorld()->ChangeFeatureLevel(ERHIFeatureLevel::ES2);
#endif

}

void AMyDefaultPawn::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}

void AMyDefaultPawn::PostInitProperties()
{
	Super::PostInitProperties();
}

void AMyDefaultPawn::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AMyDefaultPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AMyDefaultPawn::PostLoad()
{
	Super::PostLoad();
}

void AMyDefaultPawn::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();
}
