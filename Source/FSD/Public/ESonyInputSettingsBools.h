#pragma once
#include "CoreMinimal.h"
#include "ESonyInputSettingsBools.generated.h"

UENUM()
enum class ESonyInputSettingsBools : uint8 {
    MotionControlEnabled,
    MotionControlFlight,
    MotionControlSalute,
    MotionControlPrecisionMode,
    AdaptiveTriggersEnabled,
    TouchPadTerrainScannerEnabled,
    TouchPadGesturesEnabled,
    ControllerSpeakerMissionControl,
    ControllerSpeakerSalute,
    ControllerSpeakerFlare,
    ControllerSpeakerMineralCollection,
};

