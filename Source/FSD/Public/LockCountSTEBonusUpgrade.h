#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "LockCountSTEBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULockCountSTEBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTotalLockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
public:
    ULockCountSTEBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
};

