#pragma once
#include "CoreMinimal.h"
#include "ESonyInputSettingsBools.generated.h"

UENUM()
enum class ESonyInputSettingsBools : uint8 {
    MotionControlEnabled,
    MotionControlFlight,
    MotionControlSalute,
    AdaptiveTriggersEnabled,
    TouchPadTerrainScannerEnabled,
    TouchPadGesturesEnabled,
    ControllerSpeakerMissionControl,
    ControllerSpeakerSalute,
    ControllerSpeakerFlare,
    ControllerSpeakerMineralCollection,
};

