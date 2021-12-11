#pragma once
#include "CoreMinimal.h"
#include "ControllerSettings.h"
#include "HUDElements.h"
#include "CharacterOptions.h"
#include "EConsoleGraphicsMode.h"
#include "CustomKeyBinding.h"
#include "ConsoleOptionsInSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FConsoleOptionsInSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FControllerSettings ControllerSettings;
    
    UPROPERTY()
    FHUDElements HUDElements;
    
    UPROPERTY()
    bool SaveGameOptionsValid;
    
    UPROPERTY()
    bool bTutorialHintsEnabled;
    
    UPROPERTY()
    bool bShowFPS;
    
    UPROPERTY()
    int32 ShowNetInfoLevel;
    
    UPROPERTY()
    float FOV;
    
    UPROPERTY()
    float HeadbobbingScale;
    
    UPROPERTY()
    float CameraShakeScale;
    
    UPROPERTY()
    float UIDPIScale;
    
    UPROPERTY()
    float volumeCharacterVoice;
    
    UPROPERTY()
    float volumeMaster;
    
    UPROPERTY()
    float volumeMissionControl;
    
    UPROPERTY()
    float volumeSFX;
    
    UPROPERTY()
    float volumeMusic;
    
    UPROPERTY()
    bool bShowSubtitles;
    
    UPROPERTY()
    bool InvertMouse;
    
    UPROPERTY()
    bool PhotosensitiveMode;
    
    UPROPERTY()
    bool bHoldToSprint;
    
    UPROPERTY()
    bool bToggleLaserPointer;
    
    UPROPERTY()
    bool bToggleTerrainScanner;
    
    UPROPERTY()
    bool bUseMouseSmoothing;
    
    UPROPERTY()
    float MouseXSensitivity;
    
    UPROPERTY()
    float MouseYSensitivity;
    
    UPROPERTY()
    bool bUseSeperateSensitivity;
    
    UPROPERTY()
    bool bInvertMouseWheel;
    
    UPROPERTY()
    bool bInvertIncapacitatedX_Mouse;
    
    UPROPERTY()
    bool bInvertIncapacitatedX_Controller;
    
    UPROPERTY()
    bool bInvertFlightControls;
    
    UPROPERTY()
    bool bShowUIAnimations;
    
    UPROPERTY()
    bool bPlaySoundOnChatMessage;
    
    UPROPERTY()
    float ChatFadeTime;
    
    UPROPERTY()
    float ForceFeedbackScale;
    
    UPROPERTY(Config)
    int32 ChatFontSize;
    
    UPROPERTY()
    float HDRColorGamma;
    
    UPROPERTY()
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY()
    FString Language;
    
    UPROPERTY()
    FCharacterOptions CharacterOptions;
    
    UPROPERTY()
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY()
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY()
    bool SwapControllerThumbsticks;
    
    FSD_API FConsoleOptionsInSaveGame();
};

