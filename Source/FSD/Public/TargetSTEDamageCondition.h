#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "Templates/SubclassOf.h"
#include "TargetSTEDamageCondition.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UTargetSTEDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
public:
    UTargetSTEDamageCondition();
};

