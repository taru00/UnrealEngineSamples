// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "MyDefaultPawn.generated.h"

/**
 * 
 */
UCLASS()
class FACEARSAMPLE_API AMyDefaultPawn : public ADefaultPawn
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	virtual void PostInitProperties() override;
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void PostLoad() override;
	virtual void PostRegisterAllComponents() override;
};
