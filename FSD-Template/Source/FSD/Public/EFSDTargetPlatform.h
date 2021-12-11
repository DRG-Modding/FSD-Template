#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.generated.h"

UENUM()
enum class EFSDTargetPlatform : uint8 {
    Steam,
    XboxOne,
    Win10,
    PS4,
    PS5,
};

