#pragma once
#include "CoreMinimal.h"
#include "EGeneralComb.generated.h"

UENUM(BlueprintType)
enum class EGeneralComb : uint8 {
    Empty,
    KeepSrc,
    KeepDest,
    Replace,
};

