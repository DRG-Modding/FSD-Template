#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "InfectionStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UInfectionStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange InfectionChangeAmount;
    
public:
    UInfectionStatusEffectItem();
};

