#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "RandomDamageCondition.generated.h"

UCLASS(EditInlineNew)
class URandomDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Chance;
    
public:
    URandomDamageCondition();
};

