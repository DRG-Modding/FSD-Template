#pragma once
#include "CoreMinimal.h"
#include "EDroneAIState.generated.h"

UENUM(BlueprintType)
enum class EDroneAIState : uint8 {
    Follow,
    Mine,
    Fight,
    Revive,
    Light,
    GoToPlayer,
    Salute,
    CarryGem,
    UseAbillity,
    Repairing,
};

