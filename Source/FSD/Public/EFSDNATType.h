#pragma once
#include "CoreMinimal.h"
#include "EFSDNATType.generated.h"

UENUM(BlueprintType)
enum class EFSDNATType : uint8 {
    Open,
    Moderate,
    Strict,
    Unknown,
};

