#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SetStance.generated.h"

UCLASS(BlueprintType)
class UBTService_SetStance : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Distance;
    
public:
    UBTService_SetStance();
};

