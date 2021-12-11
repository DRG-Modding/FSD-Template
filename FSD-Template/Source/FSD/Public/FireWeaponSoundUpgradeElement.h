#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "FireWeaponSoundUpgradeElement.generated.h"

class USoundCue;

UCLASS(EditInlineNew)
class UFireWeaponSoundUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* FireSound;
    
public:
    UFireWeaponSoundUpgradeElement();
};

