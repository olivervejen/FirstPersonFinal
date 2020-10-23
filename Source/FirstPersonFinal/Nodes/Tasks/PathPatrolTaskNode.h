// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PathPatrolTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONFINAL_API UPathPatrolTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
};
