#pragma once
#include "CoreMinimal.h"
#include "EDamageComponentType.generated.h"

UENUM(BlueprintType)
enum class EDamageComponentType : uint8 {
    Primary,
    Secondary,
    Tertiary,
    Quaternary,
    Quinary,
    Any,
};

