#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_IsFacing.generated.h"

UCLASS()
class UBTDecorator_IsFacing : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
public:
    UBTDecorator_IsFacing();
};

