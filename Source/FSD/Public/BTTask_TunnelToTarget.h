#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_TunnelToTarget.generated.h"

UCLASS()
class UBTTask_TunnelToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DurationClamp;
    
public:
    UBTTask_TunnelToTarget();
};

