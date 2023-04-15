// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_shoot.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UBTTaskNode_shoot : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTaskNode_shoot();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
