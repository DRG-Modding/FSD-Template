#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ConditionalGuard.generated.h"

UCLASS()
class UBTDecorator_ConditionalGuard : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GuardKey;
    
    UPROPERTY(EditAnywhere)
    bool InvertLogic;
    
public:
    UBTDecorator_ConditionalGuard();
};

