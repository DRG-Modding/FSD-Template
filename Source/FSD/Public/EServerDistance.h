#pragma once
#include "CoreMinimal.h"
#include "EServerDistance.generated.h"

UENUM()
enum class EServerDistance : uint8 {
    Close,
    Medium,
    Far,
    World,
};

