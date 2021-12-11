#pragma once
#include "CoreMinimal.h"
#include "ESonyInputSettingsFloats.generated.h"

UENUM()
enum class ESonyInputSettingsFloats : uint8 {
    MotionControlXSensitivity,
    MotionControlYSensitivity,
    ControllerSpeakerVolume,
    TouchPadTerrainScannerXSensitivity,
    TouchPadTerrainScannerYSensitivity,
    TouchPadTerrainScannerZoomSensitivity,
};

