#pragma once
#include "CoreMinimal.h"
#include "EArmorType.generated.h"

UENUM(BlueprintType)
enum class EArmorType : uint8 {
    Light,
    Heavy,
    Unbreakable,
};

