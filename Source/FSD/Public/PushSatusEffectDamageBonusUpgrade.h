#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "ItemUpgrade.h"
#include "PushSatusEffectDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPushSatusEffectDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreArmorHit;
    
public:
    UPushSatusEffectDamageBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
};

