#pragma once
#include "CoreMinimal.h"
#include "EDamageUpgrade.h"
#include "DamageModifierItem.generated.h"

USTRUCT(BlueprintType)
struct FDamageModifierItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageUpgrade DamageUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplicative;
    
    FSD_API FDamageModifierItem();
};

