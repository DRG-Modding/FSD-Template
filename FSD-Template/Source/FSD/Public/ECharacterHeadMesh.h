#pragma once
#include "CoreMinimal.h"
#include "ECharacterHeadMesh.generated.h"

UENUM()
enum class ECharacterHeadMesh : uint8 {
    Full,
    ThichNeckOnly,
    ThinNeckOnly,
    None,
};

