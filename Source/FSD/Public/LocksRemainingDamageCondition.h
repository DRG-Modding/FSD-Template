#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "LocksRemainingDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULocksRemainingDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLocksRemaining;
    
public:
    ULocksRemainingDamageCondition();
};

