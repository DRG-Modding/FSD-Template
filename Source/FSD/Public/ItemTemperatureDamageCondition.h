#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ItemTemperatureDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UItemTemperatureDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeUnderThreshold;
    
public:
    UItemTemperatureDamageCondition();
};

