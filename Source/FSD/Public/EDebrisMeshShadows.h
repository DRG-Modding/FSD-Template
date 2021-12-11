#pragma once
#include "CoreMinimal.h"
#include "EDebrisMeshShadows.generated.h"

UENUM()
enum class EDebrisMeshShadows : uint8 {
    Never,
    High,
    Always,
};

