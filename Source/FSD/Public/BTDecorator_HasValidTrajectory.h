#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_HasValidTrajectory.generated.h"

UCLASS(Blueprintable)
class FSD_API UBTDecorator_HasValidTrajectory : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_HasValidTrajectory();

};

