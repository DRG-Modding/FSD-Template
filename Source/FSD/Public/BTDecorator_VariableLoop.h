#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_VariableLoop.generated.h"

UCLASS()
class UBTDecorator_VariableLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange NumLoops;
    
    UBTDecorator_VariableLoop();
};

