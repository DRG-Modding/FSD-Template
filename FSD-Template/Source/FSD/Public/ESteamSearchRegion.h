#pragma once
#include "CoreMinimal.h"
#include "ESteamSearchRegion.generated.h"

UENUM(BlueprintType)
enum class ESteamSearchRegion : uint8 {
    Close,
    Medium,
    Far,
    World,
};

