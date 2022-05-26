#pragma once
#include "CoreMinimal.h"
#include "EVolumeType.generated.h"

UENUM(BlueprintType)
enum class EVolumeType : uint8 {
    CharacterVoices,
    Master,
    SFX,
    Music,
    VoiceChat,
    MissionControl,
};

