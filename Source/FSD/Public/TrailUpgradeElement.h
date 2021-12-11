#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "TrailUpgradeElement.generated.h"

class UFXSystemAsset;

UCLASS(EditInlineNew)
class UTrailUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* Trail;
    
public:
    UTrailUpgradeElement();
};

