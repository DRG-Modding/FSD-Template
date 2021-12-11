#pragma once
#include "CoreMinimal.h"
#include "EProjectileLauncherBaseUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EProjectileLauncherBaseUpgradeType : uint8 {
    VerticalSpread,
    HorizontalSpread,
    TransferVelocityFromCharacter,
    ArcStartAngle,
};

