#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "HealingStatusEffectItem.generated.h"

class UPawnAffliction;

UCLASS(EditInlineNew)
class UHealingStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool HealPercentage;
    
    UPROPERTY(EditAnywhere)
    float NoDamageTimeRequired;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* PawnAffliction;
    
    UPROPERTY(EditAnywhere)
    FRandRange Amount;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreCanTakeDamage;
    
public:
    UHealingStatusEffectItem();
};

