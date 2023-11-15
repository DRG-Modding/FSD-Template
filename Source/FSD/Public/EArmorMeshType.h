#pragma once
#include "CoreMinimal.h"
#include "EArmorMeshType.generated.h"

UENUM(BlueprintType)
enum class EArmorMeshType : uint8 {
    None,
    Default,
    DefaultBeardCompatible,
    Sleeveless = 4,
    SleevelessBeardCompatible = 8,
};

