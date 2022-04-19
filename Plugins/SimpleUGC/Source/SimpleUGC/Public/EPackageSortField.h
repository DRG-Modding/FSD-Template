#pragma once
#include "CoreMinimal.h"
#include "EPackageSortField.generated.h"

UENUM()
enum class EPackageSortField : uint8 {
    None,
    Name,
    Status,
    Author,
    Mounted,
};

