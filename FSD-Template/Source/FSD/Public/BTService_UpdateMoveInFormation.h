#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateMoveInFormation.generated.h"

UCLASS()
class UBTService_UpdateMoveInFormation : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float AttackerRadius;
    
public:
    UBTService_UpdateMoveInFormation();
};

