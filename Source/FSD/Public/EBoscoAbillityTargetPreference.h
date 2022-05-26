#pragma once
#include "CoreMinimal.h"
#include "EBoscoAbillityTargetPreference.generated.h"

UENUM(BlueprintType)
enum class EBoscoAbillityTargetPreference : uint8 {
    Self,
    SelectedTarget,
    ClosestPlayer,
    ClosestEnemy,
    TargetLocation,
};

