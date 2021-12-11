#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "StatusDamageBonusUpgrade.generated.h"

class UStatusEffect;
class UDamageClass;
class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UStatusDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect);
    
    UStatusDamageBonusUpgrade();
};

