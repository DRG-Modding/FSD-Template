#pragma once
#include "CoreMinimal.h"
#include "ERoomMirroringSupport.generated.h"

UENUM()
enum class ERoomMirroringSupport : uint8 {
    NotAllowed,
    MirrorAroundX,
    MirrorAroundY,
    MirrorBoth,
};

