#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "StickyFlameStatusEffectUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UStickyFlameStatusEffectUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UStickyFlameStatusEffectUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
};

