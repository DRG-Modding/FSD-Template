#pragma once
#include "CoreMinimal.h"
#include "EMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EMoveDirection : uint8 {
    None,
    Forward,
    Left,
    Right,
    Back,
};

