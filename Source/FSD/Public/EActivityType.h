#pragma once
#include "CoreMinimal.h"
#include "EActivityType.generated.h"

UENUM()
enum class EActivityType : uint8 {
    Mission,
    Assignment,
    Tutorial,
    None,
};

