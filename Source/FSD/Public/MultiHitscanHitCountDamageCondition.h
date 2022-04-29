#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "MultiHitscanHitCountDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMultiHitscanHitCountDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredHitCount;
    
public:
    UMultiHitscanHitCountDamageCondition();
};

