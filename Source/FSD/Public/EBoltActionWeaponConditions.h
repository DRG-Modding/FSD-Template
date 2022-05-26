#pragma once
#include "CoreMinimal.h"
#include "EBoltActionWeaponConditions.generated.h"

UENUM(BlueprintType)
enum class EBoltActionWeaponConditions : uint8 {
    WasAimedShot,
    WasNormalShot,
};

