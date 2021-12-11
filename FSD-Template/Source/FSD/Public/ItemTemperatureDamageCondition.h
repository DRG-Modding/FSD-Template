#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ItemTemperatureDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UItemTemperatureDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 HeatThreshold;
    
    UPROPERTY(EditAnywhere)
    bool MustBeUnderThreshold;
    
public:
    UItemTemperatureDamageCondition();
};

