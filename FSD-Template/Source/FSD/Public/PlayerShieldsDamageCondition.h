#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "UObject/NoExportTypes.h"
#include "PlayerShieldsDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UPlayerShieldsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsDamageCondition();
};

