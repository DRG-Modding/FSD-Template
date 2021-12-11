#pragma once
#include "CoreMinimal.h"
#include "ESonyControllerLightMode.h"
#include "ESonyControllerMotionMapping.h"
#include "SonyInputSettings.generated.h"

USTRUCT(BlueprintType)
struct FSonyInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool MotionControlEnabled;
    
    UPROPERTY()
    float MotionControlXSensitivity;
    
    UPROPERTY()
    float MotionControlYSensitivity;
    
    UPROPERTY()
    bool MotionControlSalute;
    
    UPROPERTY()
    bool MotionControlFlight;
    
    UPROPERTY()
    ESonyControllerMotionMapping MotionXMapping;
    
    UPROPERTY()
    bool AdaptiveTriggersEnabled;
    
    UPROPERTY()
    float ControllerSpeakerVolume;
    
    UPROPERTY()
    bool ControllerSpeakerMissionControl;
    
    UPROPERTY()
    bool ControllerSpeakerSalute;
    
    UPROPERTY()
    bool ControllerSpeakerFlare;
    
    UPROPERTY()
    bool ControllerSpeakerMineralCollection;
    
    UPROPERTY()
    bool TouchPadTerrainScannerEnabled;
    
    UPROPERTY()
    float TouchPadTerrainScannerXSensitivity;
    
    UPROPERTY()
    float TouchPadTerrainScannerYSensitivity;
    
    UPROPERTY()
    float TouchPadTerrainScannerZoomSensitivity;
    
    UPROPERTY()
    bool TouchPadGesturesEnabled;
    
    UPROPERTY()
    ESonyControllerLightMode ControllerLightMode;
    
    FSD_API FSonyInputSettings();
};

