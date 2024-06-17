#pragma once
#include "CoreMinimal.h"
#include "EPropHuntEvent.generated.h"

UENUM(BlueprintType)
enum EPropHuntEvent {
    HunterBegin,
    HunterMiss,
    HunterHit,
    PropBegin,
    PropEnd,
    GameWon,
    GameLost,
};

