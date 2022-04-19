#pragma once
#include "CoreMinimal.h"
#include "ECaveEntranceType.generated.h"

UENUM(BlueprintType)
enum class ECaveEntranceType : uint8 {
    EntranceAndExit,
    Entrance,
    Exit,
    TreassureRoom,
};

