#pragma once
#include "CoreMinimal.h"
#include "ActiveStatusEffect.h"
#include "ActiveStatusEffectBank.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FActiveStatusEffectBank {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UStatusEffect* Key;
    
    UPROPERTY(Transient)
    UStatusEffect* ActiveEffect;
    
    UPROPERTY(Transient)
    TArray<FActiveStatusEffect> Effects;
    
    FSD_API FActiveStatusEffectBank();
};

