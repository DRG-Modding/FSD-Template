#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerState.generated.h"

UENUM(BlueprintType)
enum class EMediaPlayerState : uint8 {
    Stopped,
    Opening,
    Playing,
};

