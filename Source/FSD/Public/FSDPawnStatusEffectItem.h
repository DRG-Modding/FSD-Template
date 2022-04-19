#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "FSDPawnStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UFSDPawnStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackSpeedModifier;
    
public:
    UFSDPawnStatusEffectItem();
};

