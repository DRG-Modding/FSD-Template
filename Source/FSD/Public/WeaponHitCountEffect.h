#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponHitCountEffect.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWeaponHitCountEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UsesDamageEffects;
    
public:
    UWeaponHitCountEffect();
};

