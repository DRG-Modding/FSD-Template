#pragma once
#include "CoreMinimal.h"
#include "EOutline.generated.h"

UENUM(BlueprintType)
enum class EOutline : uint8 {
    OL_NONE,
    OL_FRIENDLY = 0xFB,
    OL_NEUTRAL,
    OL_ENEMY,
    OL_ITEM,
};

