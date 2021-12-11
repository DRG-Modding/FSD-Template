#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "IRandRange.h"
#include "BTDecorator_VariableLoop.generated.h"

UCLASS()
class UBTDecorator_VariableLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIRandRange NumLoops;
    
    UBTDecorator_VariableLoop();
};

