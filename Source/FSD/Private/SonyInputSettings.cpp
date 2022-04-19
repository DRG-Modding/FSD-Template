#include "SonyInputSettings.h"

FSonyInputSettings::FSonyInputSettings() {
    this->MotionControlEnabled = false;
    this->MotionControlXSensitivity = 0.00f;
    this->MotionControlYSensitivity = 0.00f;
    this->MotionControlPrecisionMode = false;
    this->MotionControlSalute = false;
    this->MotionControlFlight = false;
    this->MotionXMapping = ESonyControllerMotionMapping::Yaw;
    this->AdaptiveTriggersEnabled = false;
    this->ControllerSpeakerVolume = 0.00f;
    this->ControllerSpeakerMissionControl = false;
    this->ControllerSpeakerSalute = false;
    this->ControllerSpeakerFlare = false;
    this->ControllerSpeakerMineralCollection = false;
    this->TouchPadTerrainScannerEnabled = false;
    this->TouchPadTerrainScannerXSensitivity = 0.00f;
    this->TouchPadTerrainScannerYSensitivity = 0.00f;
    this->TouchPadTerrainScannerZoomSensitivity = 0.00f;
    this->TouchPadGesturesEnabled = false;
    this->ControllerLightMode = ESonyControllerLightMode::Disabled;
}

