#pragma once
#include "CoreMinimal.h"
#include "ECaretakerSpawnType.generated.h"

UENUM(BlueprintType)
enum class ECaretakerSpawnType : uint8 {
    None,
    Drones,
    Bombs,
    Shredders,
    Turrets,
};

