#pragma once
#include "CoreMinimal.h"
#include "ActiveStatusEffect.h"
#include "ActiveStatusEffectBank.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FActiveStatusEffectBank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatusEffect* ActiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveStatusEffect> Effects;
    
    FSD_API FActiveStatusEffectBank();
};

