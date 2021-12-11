#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "MuzzleEffectUpgradeElement.generated.h"

class UFXSystemAsset;

UCLASS(EditInlineNew)
class UMuzzleEffectUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* FPMuzzleFlash;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* TPMuzzleFlash;
    
public:
    UMuzzleEffectUpgradeElement();
};

