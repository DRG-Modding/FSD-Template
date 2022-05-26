#pragma once
#include "CoreMinimal.h"
#include "ETetherMessageDirection.generated.h"

UENUM(BlueprintType)
enum class ETetherMessageDirection : uint8 {
    Forward,
    Backward,
    Both,
};

