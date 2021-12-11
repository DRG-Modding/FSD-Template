#pragma once
#include "CoreMinimal.h"
#include "EUGCPackageError.generated.h"

UENUM()
enum class EUGCPackageError : uint8 {
    Exists,
    Invalid,
    Other,
};

