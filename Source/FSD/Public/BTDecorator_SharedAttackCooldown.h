#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RandRange.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_SharedAttackCooldown.generated.h"

UCLASS()
class UBTDecorator_SharedAttackCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CooldownKey;
    
    UBTDecorator_SharedAttackCooldown();
};

