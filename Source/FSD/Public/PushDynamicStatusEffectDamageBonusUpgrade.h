#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "PushDynamicStatusEffectDamageBonusUpgrade.generated.h"

class UStatusEffectItem;
class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UPushDynamicStatusEffectDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere, Instanced)
    UStatusEffectItem* StatusEffectItem;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey);
    
    UPushDynamicStatusEffectDamageBonusUpgrade();
};

