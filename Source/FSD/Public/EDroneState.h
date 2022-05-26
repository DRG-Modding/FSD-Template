#pragma once
#include "CoreMinimal.h"
#include "EDroneState.generated.h"

UENUM(BlueprintType)
enum class EDroneState : uint8 {
    EFollow,
    ECombat,
    EMining,
    EReviving,
};

