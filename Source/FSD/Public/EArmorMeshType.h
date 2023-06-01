#pragma once
#include "CoreMinimal.h"
#include "EArmorMeshType.generated.h"

UENUM(BlueprintType)
enum class EArmorMeshType : uint8 {
    None,
    Default,
    DefaultBeardCompatible,
    Sleeveless = 0x4,
    SleevelessBeardCompatible = 0x8,
};

