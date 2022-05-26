#pragma once
#include "CoreMinimal.h"
#include "EDebrisMeshShadows.generated.h"

UENUM(BlueprintType)
enum class EDebrisMeshShadows : uint8 {
    Never,
    High,
    Always,
};

