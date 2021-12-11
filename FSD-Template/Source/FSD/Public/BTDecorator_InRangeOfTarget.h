#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_InRangeOfTarget.generated.h"

UCLASS()
class UBTDecorator_InRangeOfTarget : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UBTDecorator_InRangeOfTarget();
};

