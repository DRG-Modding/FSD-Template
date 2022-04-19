#pragma once
#include "CoreMinimal.h"
#include "ECharacterMoveDirection.generated.h"

UENUM(BlueprintType)
enum class ECharacterMoveDirection : uint8 {
    None,
    Forward,
    Left,
    Right,
    Back,
};

