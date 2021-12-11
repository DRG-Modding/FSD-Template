#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CheckPathToTarget.generated.h"

UCLASS()
class UBTService_CheckPathToTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ResultKey;
    
public:
    UBTService_CheckPathToTarget();
};

