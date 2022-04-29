#pragma once
#include "CoreMinimal.h"
#include "ESonyControllerMotionMapping.h"
#include "ESonyControllerLightMode.h"
#include "SonyInputSettings.generated.h"

USTRUCT(BlueprintType)
struct FSonyInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotionControlEnabled;
    
    UPROPERTY(EditAnywhere)
    float MotionControlXSensitivity;
    
    UPROPERTY(EditAnywhere)
    float MotionControlYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotionControlPrecisionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotionControlSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotionControlFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESonyControllerMotionMapping MotionXMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AdaptiveTriggersEnabled;
    
    UPROPERTY(EditAnywhere)
    float ControllerSpeakerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerMissionControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerSpeakerMineralCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TouchPadTerrainScannerEnabled;
    
    UPROPERTY(EditAnywhere)
    float TouchPadTerrainScannerXSensitivity;
    
    UPROPERTY(EditAnywhere)
    float TouchPadTerrainScannerYSensitivity;
    
    UPROPERTY(EditAnywhere)
    float TouchPadTerrainScannerZoomSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TouchPadGesturesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESonyControllerLightMode ControllerLightMode;
    
    FSD_API FSonyInputSettings();
};

