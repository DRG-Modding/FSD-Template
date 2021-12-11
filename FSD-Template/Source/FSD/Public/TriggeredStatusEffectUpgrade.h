#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "ETriggeredStatusEffectType.h"
#include "UpgradeValues.h"
#include "TriggeredStatusEffectUpgrade.generated.h"

class UStatusEffect;
class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class UTriggeredStatusEffectUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    ETriggeredStatusEffectType upgradeType;
    
    UPROPERTY(EditAnywhere)
    float AoERange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OwnerEffect;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> NewStatusEffect, ETriggeredStatusEffectType aUpgradeType);
    
    UTriggeredStatusEffectUpgrade();
};

