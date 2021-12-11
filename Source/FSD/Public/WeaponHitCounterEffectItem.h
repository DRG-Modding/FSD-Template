#pragma once
#include "CoreMinimal.h"
#include "WeaponHitCounterEffectItem.generated.h"

class AActor;

USTRUCT()
struct FWeaponHitCounterEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Target;
    
    FSD_API FWeaponHitCounterEffectItem();
};

