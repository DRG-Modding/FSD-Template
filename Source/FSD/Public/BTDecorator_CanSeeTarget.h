#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CanSeeTarget.generated.h"

UCLASS()
class UBTDecorator_CanSeeTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseAsync;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    FVector EyeLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UBTDecorator_CanSeeTarget();
};

