#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RandRange.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_RandomCooldown.generated.h"

UCLASS()
class UBTDecorator_RandomCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandRange CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CooldownTimeModifier;
    
    UBTDecorator_RandomCooldown();
};

