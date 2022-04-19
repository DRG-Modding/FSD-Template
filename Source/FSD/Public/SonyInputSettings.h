#pragma once
#include "CoreMinimal.h"
#include "ESonyControllerLightMode.h"
#include "ESonyControllerMotionMapping.h"
#include "SonyInputSettings.generated.h"

USTRUCT(BlueprintType)
struct FSonyInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MotionControlEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MotionControlXSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MotionControlYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MotionControlPrecisionMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MotionControlSalute;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool MotionControlFlight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESonyControllerMotionMapping MotionXMapping;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool AdaptiveTriggersEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ControllerSpeakerVolume;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerMissionControl;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerSalute;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerFlare;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerMineralCollection;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool TouchPadTerrainScannerEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TouchPadTerrainScannerXSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TouchPadTerrainScannerYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TouchPadTerrainScannerZoomSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool TouchPadGesturesEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESonyControllerLightMode ControllerLightMode;
    
    FSD_API FSonyInputSettings();
};

