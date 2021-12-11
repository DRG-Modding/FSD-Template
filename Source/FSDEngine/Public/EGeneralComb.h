#pragma once
#include "CoreMinimal.h"
#include "EGeneralComb.generated.h"

UENUM()
enum class EGeneralComb : uint8 {
    Empty,
    KeepSrc,
    KeepDest,
    Replace,
};

