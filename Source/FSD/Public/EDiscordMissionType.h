#pragma once
#include "CoreMinimal.h"
#include "EDiscordMissionType.generated.h"

UENUM(BlueprintType)
enum class EDiscordMissionType : uint8 {
    MiningExpedition,
    EggHunt,
    Escort,
    Elimination,
    PointExtraction,
    Salvage,
    Refinery,
    None,
};

