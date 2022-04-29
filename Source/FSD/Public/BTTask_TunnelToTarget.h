#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_TunnelToTarget.generated.h"

UCLASS(Blueprintable)
class UBTTask_TunnelToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    float BurrowSpeed;
    
    UPROPERTY(EditAnywhere)
    float BurrowDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DurationClamp;
    
public:
    UBTTask_TunnelToTarget();
};

