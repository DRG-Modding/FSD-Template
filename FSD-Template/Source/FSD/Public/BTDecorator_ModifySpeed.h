#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ModifySpeed.generated.h"

UCLASS()
class UBTDecorator_ModifySpeed : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
public:
    UBTDecorator_ModifySpeed();
};

