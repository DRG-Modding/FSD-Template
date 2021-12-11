#pragma once
#include "CoreMinimal.h"
#include "EGuntowerModuleState.generated.h"

UENUM(BlueprintType)
enum class EGuntowerModuleState : uint8 {
    EDormant,
    EActive,
    EVulnerable,
    EDestoyed,
};

