#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageCondition.h"
#include "TargetSTEDamageCondition.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew)
class UTargetSTEDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
public:
    UTargetSTEDamageCondition();
};

