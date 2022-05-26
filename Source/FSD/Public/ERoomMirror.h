#pragma once
#include "CoreMinimal.h"
#include "ERoomMirror.generated.h"

UENUM(BlueprintType)
enum class ERoomMirror : uint8 {
    None,
    MirrorX,
    MirrorY,
};

