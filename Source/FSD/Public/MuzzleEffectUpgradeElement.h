#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "MuzzleEffectUpgradeElement.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable, EditInlineNew)
class UMuzzleEffectUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> FPMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> TPMuzzleFlash;
    
public:
    UMuzzleEffectUpgradeElement();

};

