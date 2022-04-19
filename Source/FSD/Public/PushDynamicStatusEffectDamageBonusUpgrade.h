#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "PushDynamicStatusEffectDamageBonusUpgrade.generated.h"

class AFSDPlayerState;
class UStatusEffectItem;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
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

