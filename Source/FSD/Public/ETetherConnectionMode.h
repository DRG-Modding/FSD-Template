#pragma once
#include "CoreMinimal.h"
#include "ETetherConnectionMode.generated.h"

UENUM()
enum class ETetherConnectionMode : int32 {
    Both,
    FrontOnly,
    BackOnly,
    None,
};

