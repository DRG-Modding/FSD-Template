#pragma once
#include "CoreMinimal.h"
#include "PFCollisionType.generated.h"

UENUM(BlueprintType)
enum class PFCollisionType : uint8 {
    SolidWalkable,
    Block,
    Danger,
};

