#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBoscoUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "BoscoUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBoscoUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoscoUpgrades upgradeType;
    
public:
    UBoscoUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EBoscoUpgrades NewUpgradeType);
    
};

