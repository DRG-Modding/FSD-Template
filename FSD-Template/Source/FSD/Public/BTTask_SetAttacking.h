#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetAttacking.generated.h"

UCLASS()
class UBTTask_SetAttacking : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_SetAttacking();
};

