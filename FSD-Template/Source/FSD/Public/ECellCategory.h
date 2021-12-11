#pragma once
#include "CoreMinimal.h"
#include "ECellCategory.generated.h"

UENUM()
enum class ECellCategory {
    Cave,
    Tunnel,
    ECellCategory_MAX = 0xFF,
};

