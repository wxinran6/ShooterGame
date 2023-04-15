// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_shoot.h"
#include "AIController.h"
#include "Shooter.h"
UBTTaskNode_shoot::UBTTaskNode_shoot()
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTaskNode_shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if (OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    AShooter* Character = Cast<AShooter>(OwnerComp.GetAIOwner()->GetPawn());
    if (Character == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    Character->Shoot();
    return EBTNodeResult::Succeeded;
}
