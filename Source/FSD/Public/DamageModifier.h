#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DamageModifierItem.h"
#include "DamageModifier.generated.h"

class UDamageCondition;

UCLASS(Blueprintable, EditInlineNew)
class UDamageModifier : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageModifierItem> Modifiers;
    
public:
    UDamageModifier();
};

