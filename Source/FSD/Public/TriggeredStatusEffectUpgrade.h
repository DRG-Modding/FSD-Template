#pragma once
#include "CoreMinimal.h"
#include "ETriggeredStatusEffectType.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "TriggeredStatusEffectUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UTriggeredStatusEffectUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggeredStatusEffectType upgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoERange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OwnerEffect;
    
public:
    UTriggeredStatusEffectUpgrade();
    UFUNCTION(BlueprintCallable)
    void OnEffectShouldTrigger(AActor* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> NewStatusEffect, ETriggeredStatusEffectType aUpgradeType);
    
};

