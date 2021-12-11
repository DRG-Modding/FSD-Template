#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDirectDamageConditionEnum.h"
#include "DirectDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UDirectDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EDirectDamageConditionEnum Type;
    
public:
    UDirectDamageCondition();
};

