#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "HitScanImpactUpgradeElement.generated.h"

class UFXSystemAsset;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class UHitScanImpactUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> ImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> ImpactSound;
    
public:
    UHitScanImpactUpgradeElement();

};

