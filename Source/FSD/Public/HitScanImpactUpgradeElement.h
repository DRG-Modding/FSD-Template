#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "HitScanImpactUpgradeElement.generated.h"

class UFXSystemAsset;
class USoundCue;

UCLASS(EditInlineNew)
class UHitScanImpactUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ImpactParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactSound;
    
public:
    UHitScanImpactUpgradeElement();
};

