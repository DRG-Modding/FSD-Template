#pragma once
#include "CoreMinimal.h"
#include "EGooGunFireMode.generated.h"

UENUM(BlueprintType)
enum class EGooGunFireMode : uint8 {
    Normal,
    Charge,
    Burst,
};

