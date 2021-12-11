#pragma once
#include "CoreMinimal.h"
#include "EAlwaysLoadedWorlds.generated.h"

UENUM(BlueprintType)
enum class EAlwaysLoadedWorlds : uint8 {
    CharacterViewer,
    LoaderNormal,
    LoaderDeepDive,
};

