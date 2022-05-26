#pragma once
#include "CoreMinimal.h"
#include "ERicochetBehavior.generated.h"

UENUM(BlueprintType)
enum class ERicochetBehavior : uint8 {
    All,
    PawnsOnly,
    NotPawns,
};

