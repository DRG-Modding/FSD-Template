#pragma once
#include "CoreMinimal.h"
#include "EEnemyDescriptorCheatClass.generated.h"

UENUM()
enum class EEnemyDescriptorCheatClass : uint8 {
    Hidden,
    Basic,
    Advanced,
    Mactera,
    Specials,
    Boss,
};

