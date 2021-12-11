#pragma once
#include "CoreMinimal.h"
#include "EPostProcessingType.generated.h"

UENUM(BlueprintType)
enum class EPostProcessingType : uint8 {
    GameWorld,
    CharacterSelector,
};

