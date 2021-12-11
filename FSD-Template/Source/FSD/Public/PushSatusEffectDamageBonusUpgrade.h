#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "PushSatusEffectDamageBonusUpgrade.generated.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UPushSatusEffectDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreArmorHit;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
    UPushSatusEffectDamageBonusUpgrade();
};

