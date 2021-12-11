#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RandRange.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_SharedCooldown.generated.h"

UCLASS()
class UBTDecorator_SharedCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandRange CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CooldownKey;
    
    UBTDecorator_SharedCooldown();
};

