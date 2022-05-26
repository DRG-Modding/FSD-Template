#pragma once
#include "CoreMinimal.h"
#include "EEnemyControlState.generated.h"

UENUM(BlueprintType)
enum class EEnemyControlState : uint8 {
    Connecting,
    Connected,
    ThrowingOff,
    Disconnecting,
    Disconneced,
};

