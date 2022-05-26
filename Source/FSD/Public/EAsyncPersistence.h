#pragma once
#include "CoreMinimal.h"
#include "EAsyncPersistence.generated.h"

UENUM(BlueprintType)
enum class EAsyncPersistence : uint8 {
    Manual,
    Level,
    Permanent,
};

