#pragma once
#include "CoreMinimal.h"
#include "EPickaxePart.generated.h"

UENUM(BlueprintType)
enum class EPickaxePart : uint8 {
    Head,
    Blade,
    Shaft,
    Handle,
    Pommel,
    Material,
};

