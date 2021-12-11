#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.generated.h"

UENUM(BlueprintType)
enum class ESchematicType : uint8 {
    Overclock,
    Vanity,
    Resource,
    Blank,
};

