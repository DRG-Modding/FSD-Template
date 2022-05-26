#pragma once
#include "CoreMinimal.h"
#include "ECoilgunTraceEffect.generated.h"

UENUM(BlueprintType)
enum class ECoilgunTraceEffect : uint8 {
    EPrimary,
    EDamage,
    EFear,
};

