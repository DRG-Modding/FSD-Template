#pragma once
#include "CoreMinimal.h"
#include "ECSGModifiers.generated.h"

UENUM(BlueprintType)
enum class ECSGModifiers : uint8 {
    AddMaterialLayers,
    HasCachedTree,
};

