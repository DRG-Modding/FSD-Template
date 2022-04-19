#pragma once
#include "CoreMinimal.h"
#include "ESpiderDeathAnimationCategory.generated.h"

UENUM(BlueprintType)
enum class ESpiderDeathAnimationCategory : uint8 {
    NoAnimation,
    Melt,
    Cook,
    Burn,
};

