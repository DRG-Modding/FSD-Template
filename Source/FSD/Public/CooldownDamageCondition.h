#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "CooldownDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCooldownDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
public:
    UCooldownDamageCondition();
};

