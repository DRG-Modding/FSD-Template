#pragma once
#include "CoreMinimal.h"
#include "EDialogRestriction.generated.h"

UENUM(BlueprintType)
enum class EDialogRestriction : uint8 {
    None,
    SinglePlayerOnly,
    MultiPlayerOnly,
};

