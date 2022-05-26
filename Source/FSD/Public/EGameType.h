#pragma once
#include "CoreMinimal.h"
#include "EGameType.generated.h"

UENUM(BlueprintType)
enum class EGameType : uint8 {
    Fully,
    Progression,
    Sandbox,
    Vanilla = 0x63,
};

