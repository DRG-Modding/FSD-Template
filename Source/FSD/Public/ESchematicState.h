#pragma once
#include "CoreMinimal.h"
#include "ESchematicState.generated.h"

UENUM()
enum class ESchematicState : uint8 {
    NotOwned,
    Owned,
    OwnedBuilt,
};

