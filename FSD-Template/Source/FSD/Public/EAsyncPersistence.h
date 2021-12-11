#pragma once
#include "CoreMinimal.h"
#include "EAsyncPersistence.generated.h"

UENUM()
enum class EAsyncPersistence : uint8 {
    Manual,
    Level,
    Permanent,
};

