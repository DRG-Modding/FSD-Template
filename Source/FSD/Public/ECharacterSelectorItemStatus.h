#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectorItemStatus.generated.h"

UENUM()
enum class ECharacterSelectorItemStatus : uint8 {
    LeaveAsIs,
    SwitchToDefault,
    NoItemEquipped,
};

