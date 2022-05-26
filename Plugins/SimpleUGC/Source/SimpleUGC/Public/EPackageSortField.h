#pragma once
#include "CoreMinimal.h"
#include "EPackageSortField.generated.h"

UENUM(BlueprintType)
enum class EPackageSortField : uint8 {
    None,
    Name,
    Status,
    Author,
    Mounted,
};

