#pragma once
#include "CoreMinimal.h"
#include "ControllerSettings.h"
#include "HUDElements.h"
#include "EConsoleGraphicsMode.h"
#include "CustomKeyBinding.h"
#include "CharacterOptions.h"
#include "UDLSSMode.h"
#include "ConsoleOptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FConsoleOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerSettings ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDElements HUDElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveGameOptionsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialHintsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowNetInfoLevel;
    
    UPROPERTY(EditAnywhere)
    float FOV;
    
    UPROPERTY(EditAnywhere)
    float HeadbobbingScale;
    
    UPROPERTY(EditAnywhere)
    float CameraShakeScale;
    
    UPROPERTY(EditAnywhere)
    float UIDPIScale;
    
    UPROPERTY(EditAnywhere)
    float volumeCharacterVoice;
    
    UPROPERTY(EditAnywhere)
    float volumeMaster;
    
    UPROPERTY(EditAnywhere)
    float volumeMissionControl;
    
    UPROPERTY(EditAnywhere)
    float volumeSFX;
    
    UPROPERTY(EditAnywhere)
    float volumeMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PhotosensitiveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleLaserPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleTerrainScanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMouseSmoothing;
    
    UPROPERTY(EditAnywhere)
    float MouseXSensitivity;
    
    UPROPERTY(EditAnywhere)
    float MouseYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeperateSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertIncapacitatedX_Mouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertIncapacitatedX_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertFlightControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUIAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySoundOnChatMessage;
    
    UPROPERTY(EditAnywhere)
    float ChatFadeTime;
    
    UPROPERTY(EditAnywhere)
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatFontSize;
    
    UPROPERTY(EditAnywhere)
    float HDRColorGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterOptions CharacterOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwapControllerThumbsticks;
    
    UPROPERTY(EditAnywhere)
    float FSDResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpscalingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmdFsrMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode NvidiaDlssMode;
    
    UPROPERTY(EditAnywhere)
    float AmdFsrSharpness;
    
    UPROPERTY(EditAnywhere)
    float NvidiaDlssSharpness;
    
    FSD_API FConsoleOptionsInSaveGame();
};

