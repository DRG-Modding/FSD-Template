#pragma once
#include "CoreMinimal.h"
#include "ECharacterCameraMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterCameraMode : uint8 {
    FirstPerson,
    ThirdPerson,
    Follow,
    DownCamera,
    TerrainScanner,
    PhotographyMode,
    FirstPersonHeadOnly,
};

