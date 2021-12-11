#pragma once
#include "CoreMinimal.h"
#include "EGameOwnerStatus.generated.h"

UENUM()
enum class EGameOwnerStatus : uint8 {
    Supporter,
    ContentCreator,
    Developer,
    Modder,
    EGameOwnerStatus_Max = 0xFF,
};

