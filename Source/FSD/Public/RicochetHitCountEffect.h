#pragma once
#include "CoreMinimal.h"
#include "WeaponHitCountEffect.h"
#include "RicochetHitCountEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URicochetHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
    URicochetHitCountEffect();
};

