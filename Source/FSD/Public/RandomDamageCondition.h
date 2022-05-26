#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "RandomDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URandomDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
public:
    URandomDamageCondition();
};

