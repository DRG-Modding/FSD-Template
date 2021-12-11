#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "DamageModifierItem.h"
#include "UpgradeValues.h"
#include "ConditionalDamageModifierUpgrade.generated.h"

class UDamageCondition;
class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UConditionalDamageModifierUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TArray<FDamageModifierItem> Modifiers;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player);
    
    UConditionalDamageModifierUpgrade();
};

