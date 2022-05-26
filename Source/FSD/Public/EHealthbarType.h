#pragma once
#include "CoreMinimal.h"
#include "EHealthbarType.generated.h"

UENUM(BlueprintType)
enum class EHealthbarType : uint8 {
    None,
    MainLife,
    Shield,
};

