#pragma once
#include "CoreMinimal.h"
#include "EFlyingBugDeathAnimationCategory.generated.h"

UENUM(BlueprintType)
enum class EFlyingBugDeathAnimationCategory : uint8 {
    NoAnimation,
    IdleOnDeath,
};

