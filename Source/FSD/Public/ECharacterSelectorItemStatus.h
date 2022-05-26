#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectorItemStatus.generated.h"

UENUM(BlueprintType)
enum class ECharacterSelectorItemStatus : uint8 {
    LeaveAsIs,
    SwitchToDefault,
    NoItemEquipped,
};

