#pragma once
#include "CoreMinimal.h"
#include "EDamageUpgrade.h"
#include "DamageModifierItem.generated.h"

USTRUCT(BlueprintType)
struct FDamageModifierItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDamageUpgrade DamageUpgrade;
    
    UPROPERTY(EditAnywhere)
    float Additive;
    
    UPROPERTY(EditAnywhere)
    float Multiplicative;
    
    FSD_API FDamageModifierItem();
};

