#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EHeavyParticleCannonUpgrade.h"
#include "UpgradeValues.h"
#include "HeavyParticleCannonUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UHeavyParticleCannonUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeavyParticleCannonUpgrade upgradeType;
    
public:
    UHeavyParticleCannonUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHeavyParticleCannonUpgrade NewUpgradeType);
    
};

