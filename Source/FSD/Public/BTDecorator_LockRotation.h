#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_LockRotation.generated.h"

UCLASS(Blueprintable)
class FSD_API UBTDecorator_LockRotation : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_LockRotation();
};

