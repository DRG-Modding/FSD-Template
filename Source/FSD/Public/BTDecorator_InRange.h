#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "AITypes.h"
#include "BTDecorator_InRange.generated.h"

UCLASS()
class UBTDecorator_InRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRange();
};

