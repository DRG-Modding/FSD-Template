#pragma once
#include "CoreMinimal.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "CooldownUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCooldownUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
    UCooldownUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player);
    
};

