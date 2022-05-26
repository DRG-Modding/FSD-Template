#pragma once
#include "CoreMinimal.h"
#include "EBuildTypeRestriction.generated.h"

UENUM(BlueprintType)
enum class EBuildTypeRestriction : uint8 {
    Development,
    Shipping,
};

