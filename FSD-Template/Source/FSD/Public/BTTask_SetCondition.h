#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetCondition.generated.h"

UCLASS()
class UBTTask_SetCondition : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ConditionalKey;
    
    UPROPERTY(EditAnywhere)
    bool Value;
    
public:
    UBTTask_SetCondition();
};

