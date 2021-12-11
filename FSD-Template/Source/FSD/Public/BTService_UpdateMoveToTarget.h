#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateMoveToTarget.generated.h"

UCLASS()
class UBTService_UpdateMoveToTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
public:
    UBTService_UpdateMoveToTarget();
};

