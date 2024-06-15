#pragma once
#include "CoreMinimal.h"
#include "EPropHuntRole.generated.h"

UENUM(BlueprintType)
enum class EPropHuntRole : uint8 {
    PendingRole,
    Hunter,
    Prop,
};

