#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "LockCountSTEBonusUpgrade.generated.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class ULockCountSTEBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    bool UseTotalLockCount;
    
    UPROPERTY(EditAnywhere)
    float Amount;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect);
    
    ULockCountSTEBonusUpgrade();
};

