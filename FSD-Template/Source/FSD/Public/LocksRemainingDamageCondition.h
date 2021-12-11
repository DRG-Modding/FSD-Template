#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "LocksRemainingDamageCondition.generated.h"

UCLASS(EditInlineNew)
class ULocksRemainingDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 MaxLocksRemaining;
    
public:
    ULocksRemainingDamageCondition();
};

