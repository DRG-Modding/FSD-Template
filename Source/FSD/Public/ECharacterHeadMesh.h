#pragma once
#include "CoreMinimal.h"
#include "ECharacterHeadMesh.generated.h"

UENUM(BlueprintType)
enum class ECharacterHeadMesh : uint8 {
    Full,
    ThichNeckOnly,
    ThinNeckOnly,
    None,
    FlatEars,
    FaceOnly,
    EyesOnly,
};

