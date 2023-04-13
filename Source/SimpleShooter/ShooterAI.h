// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterAI : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
};
