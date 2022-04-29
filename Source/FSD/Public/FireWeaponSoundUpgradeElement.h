#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "FireWeaponSoundUpgradeElement.generated.h"

class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class UFireWeaponSoundUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FireSound;
    
public:
    UFireWeaponSoundUpgradeElement();
};

