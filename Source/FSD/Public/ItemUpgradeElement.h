#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemUpgradeElement.generated.h"

class UItemUpgrade;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemUpgradeElement : public UDataAsset {
    GENERATED_BODY()
public:
    UItemUpgradeElement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ElementOf(UItemUpgrade* upg) const;
    
};

