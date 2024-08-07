#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBaseUpgrade.h"
#include "RandRange.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "RandomDamageUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URandomDamageUpgrade : public UDamageBonusBaseUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange DamageRange;
    
public:
    URandomDamageUpgrade();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player);
    
};

