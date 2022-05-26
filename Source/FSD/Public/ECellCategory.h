#pragma once
#include "CoreMinimal.h"
#include "ECellCategory.generated.h"

UENUM(BlueprintType)
enum class ECellCategory : uint8 {
    Cave,
    Tunnel,
    ECellCategory_MAX = 0xFF,
};

