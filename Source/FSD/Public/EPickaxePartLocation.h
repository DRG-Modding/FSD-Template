#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.generated.h"

UENUM()
enum class EPickaxePartLocation : uint8 {
    Head,
    FrontBlade,
    BackBlade,
    Shaft,
    Handle,
    Pommel,
    Material,
    Count,
};

