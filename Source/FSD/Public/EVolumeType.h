#pragma once
#include "CoreMinimal.h"
#include "EVolumeType.generated.h"

UENUM()
enum class EVolumeType : uint8 {
    CharacterVoices,
    Master,
    SFX,
    Music,
    VoiceChat,
    MissionControl,
};

