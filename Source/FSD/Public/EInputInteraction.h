#pragma once
#include "CoreMinimal.h"
#include "EInputInteraction.generated.h"

UENUM(BlueprintType)
enum class EInputInteraction : uint8 {
    Press,
    Hold,
};

