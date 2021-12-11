#pragma once
#include "CoreMinimal.h"
#include "EPickaxeState.generated.h"

UENUM(BlueprintType)
enum class EPickaxeState : uint8 {
    Equipping,
    Mining,
    PowerAttack,
    End,
};

