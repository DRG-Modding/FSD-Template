#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "UObject/NoExportTypes.h"
#include "PlayerHealthDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UPlayerHealthDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HealthPercentageRequired;
    
public:
    UPlayerHealthDamageCondition();
};

