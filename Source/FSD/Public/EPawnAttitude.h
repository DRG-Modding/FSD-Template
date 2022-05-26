#pragma once
#include "CoreMinimal.h"
#include "EPawnAttitude.generated.h"

UENUM(BlueprintType)
enum class EPawnAttitude : uint8 {
    Friendly,
    Neutral,
    Hostile,
};

