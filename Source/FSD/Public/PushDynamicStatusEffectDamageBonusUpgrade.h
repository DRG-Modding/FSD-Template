#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "PushDynamicStatusEffectDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UStatusEffectItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPushDynamicStatusEffectDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectItem* StatusEffectItem;
    
public:
    UPushDynamicStatusEffectDamageBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey);
    
};

