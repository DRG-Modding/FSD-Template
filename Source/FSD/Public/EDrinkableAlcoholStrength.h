#pragma once
#include "CoreMinimal.h"
#include "EDrinkableAlcoholStrength.generated.h"

UENUM(BlueprintType)
enum class EDrinkableAlcoholStrength : uint8 {
    NonAlcoholic,
    Light,
    Regular,
    Strong,
    VeryStrong,
    InstantPassout,
};

