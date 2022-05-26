#pragma once
#include "CoreMinimal.h"
#include "EUGCPackageError.generated.h"

UENUM(BlueprintType)
enum class EUGCPackageError : uint8 {
    Exists,
    Invalid,
    Other,
};

