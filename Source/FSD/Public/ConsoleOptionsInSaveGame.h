#pragma once
#include "CoreMinimal.h"
#include "ControllerSettings.h"
#include "CharacterOptions.h"
#include "HUDElements.h"
#include "UDLSSMode.h"
#include "EConsoleGraphicsMode.h"
#include "CustomKeyBinding.h"
#include "ConsoleOptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FConsoleOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FControllerSettings ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHUDElements HUDElements;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool SaveGameOptionsValid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bTutorialHintsEnabled;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ShowNetInfoLevel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HeadbobbingScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float UIDPIScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float volumeCharacterVoice;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float volumeMaster;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float volumeMissionControl;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float volumeSFX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float volumeMusic;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool InvertMouse;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool PhotosensitiveMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHoldToSprint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bToggleLaserPointer;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bToggleTerrainScanner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MouseXSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MouseYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseSeperateSensitivity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInvertMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInvertIncapacitatedX_Mouse;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInvertIncapacitatedX_Controller;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInvertFlightControls;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShowUIAnimations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPlaySoundOnChatMessage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ChatFadeTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 ChatFontSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HDRColorGamma;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterOptions CharacterOptions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool SwapControllerThumbsticks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FSDResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 UpscalingType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AmdFsrMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UDLSSMode NvidiaDlssMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AmdFsrSharpness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float NvidiaDlssSharpness;
    
    FSD_API FConsoleOptionsInSaveGame();
};

