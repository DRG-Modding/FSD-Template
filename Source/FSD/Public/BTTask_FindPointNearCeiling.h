#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindPointNearCeiling.generated.h"

UCLASS()
class UBTTask_FindPointNearCeiling : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CloseToCeilingBias;
    
    UPROPERTY(EditAnywhere)
    float LookForCeilingLength;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
public:
    UBTTask_FindPointNearCeiling();
};

