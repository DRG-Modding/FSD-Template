#pragma once
#include "CoreMinimal.h"
#include "EThrownGrenadeItemState.generated.h"

UENUM()
enum class EThrownGrenadeItemState : uint8 { // Enum used to be int32
    NotEquipped,
    Cooking,
    Throwing,
};

