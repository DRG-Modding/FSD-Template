#pragma once
#include "CoreMinimal.h"
#include "EMoveType.generated.h"

UENUM(BlueprintType)
enum class EMoveType : uint8 {
    EaseIn,
    EaseOut,
};

