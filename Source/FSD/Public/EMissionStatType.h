#pragma once
#include "CoreMinimal.h"
#include "EMissionStatType.generated.h"

UENUM(BlueprintType)
enum class EMissionStatType : uint8 {
    Float,
    Integer,
    Time,
    Distance,
};

