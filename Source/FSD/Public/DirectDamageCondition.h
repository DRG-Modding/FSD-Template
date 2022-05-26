#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EDirectDamageConditionEnum.h"
#include "DirectDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDirectDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirectDamageConditionEnum Type;
    
public:
    UDirectDamageCondition();
};

