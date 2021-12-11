#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "CapacityUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UCapacityUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, int32 componentIndex);
    
    UCapacityUpgrade();
};

