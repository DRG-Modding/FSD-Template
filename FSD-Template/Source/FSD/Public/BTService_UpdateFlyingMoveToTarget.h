#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateFlyingMoveToTarget.generated.h"

UCLASS()
class UBTService_UpdateFlyingMoveToTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
public:
    UBTService_UpdateFlyingMoveToTarget();
};

