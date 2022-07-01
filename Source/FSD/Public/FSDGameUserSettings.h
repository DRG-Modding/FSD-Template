#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "BoolConfigChangedDelegate.h"
#include "FloatConfigChangedDelegate.h"
#include "ModdingUISettings.h"
#include "LanguageChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "StringConfigChangedDelegate.h"
#include "ChatFontSizeChangedDelegate.h"
#include "ModdingSettingsChangedDelegate.h"
#include "UDLSSMode.h"
#include "ENVidiaReflexMode.h"
#include "EConsoleGraphicsMode.h"
#include "CharacterOptions.h"
#include "HUDElements.h"
#include "InputSourceChangedSignatureDelegate.h"
#include "Int32ConfigChangedDelegate.h"
#include "GameFramework/GameUserSettings.h"
#include "CustomKeyBindingsChangedDelegate.h"
#include "EFSDInputSource.h"
#include "CustomKeyBinding.h"
#include "ControllerSettings.h"
#include "UObject/NoExportTypes.h"
#include "EVolumeType.h"
#include "ETurn180Mode.h"
#include "ESteamSearchRegion.h"
#include "ESaveSlotChangeProcedure.h"
#include "FSDGameUserSettings.generated.h"

class USoundClass;
class APlayerController;
class UObject;
class UDifficultySetting;
class UFSDGameUserSettings;

UCLASS(Blueprintable)
class UFSDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnUseHoldToRunChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatConfigChanged OnFOVChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanguageChanged OnLanguageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringConfigChanged OnGameServerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatFontSizeChanged OnFontSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnJukeboxStreamerModeChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJukeboxStreamerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGraphicSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentUserSetSaveSlotName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnCanShowBloodChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> NamedBoolSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModdingUISettings ModdingUISettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerSearchRegion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerSearchPasswordRequired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModdingSettingsChanged OnModdingSettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeCharacterVoice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMissionControl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMaster;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeSFX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeMusic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentAudioOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultAudioOutputDevice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sharpening;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TemporalAAUpsamplingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeVoice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpscalingType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmdFsrMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmdFsrSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode NvidiaDlssMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NvidiaDlssSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FSDResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENVidiaReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassCharacterVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMissionControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundClass* soundClassVoice;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatFontSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePushToTalk;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalGameServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalGameServerNameFiltered;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppearOffline;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRefreshServerlist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseXSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseYSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSeperateSensetivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertMouse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertScroolWheel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHoldToRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseToggleLaserpointer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbobbingScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatFadeTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStreamerProgram;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SoundOnChatMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PhotosensitiveMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowUIAnimations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseProfanityFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertFlightControls;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDx12ByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRColorGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDElements HUDElements;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterOptions CharacterOptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTurnDirection_Controller;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTurnDirection_Mouse;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIDPIScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnableCustomUIScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInputSourceChangedSignature OnInputSourceChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckCursorOutOfBounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnEnableTutorialHintsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnShowFPSChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32ConfigChanged OnShowNetInfoLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnDx12Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntPoint ResolutionToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool VSyncToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Dx12ToBeApplied;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<EWindowMode::Type> InFullscreenModeToBeApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool InFullscreenModeToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool VSyncToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Dx12ToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ResolutionToBeAppliedValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EscMenuActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowUpgradeExtraDetails;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoolConfigChanged OnShowUpgradeExtraDetailsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomKeyBindingsChanged OnCustomKeyBindingsChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastNiagaraShaderVerions;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDInputSource CurrentInputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSDInputSource RequestedInputSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwapControllerThumbsticks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialHintsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowNetInfoLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowBlood;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TranslatorDebugModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PreviousCulture;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerSettings ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> SelectedDifficultyLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DifficultyLevelsAddedByDefault;
    
public:
    UFSDGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForceFeedbackScaleOnController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool ToggleTranslatorDebugMode();
    
    UFUNCTION(BlueprintCallable)
    bool ToggleShowUpgradeExtraDetails();
    
    UFUNCTION(BlueprintCallable)
    void ToggleModdingServerFilter(uint8 ServerFilter, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetZiplineGunAutoSwitch(bool shouldAutoSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabledToBeApplied(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(EVolumeType volumeType, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetUseToggleTerrainScanner(bool useToggleTerrainScanner);
    
    UFUNCTION(BlueprintCallable)
    void SetUseToggleLaserpointer(bool NewUseToggleLaserpointer);
    
    UFUNCTION(BlueprintCallable)
    void SetUseStreamerProgram(bool NewUseStreamerProgram);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSeparateSensitivity(bool newSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetUseProfanityFilter(bool shouldUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUseHoldToRun(bool NewUseHoldToRun);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCustomUIScale(bool UseCustomScale);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDPIScale(float uiscale);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialHintsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTurn180Mode(ETurn180Mode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTemporalAAUpscalingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSwapControllerThumbsticks(bool InSwapThumbsticks);
    
    UFUNCTION(BlueprintCallable)
    void SetSteamSearchRegion(ESteamSearchRegion InRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUIAnimations(bool shouldShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSubtitles(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSandboxLabel(bool InShowLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNetInfoLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFPS(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpening(float NewSharpening);
    
    UFUNCTION(BlueprintCallable)
    void SetServerSearchPasswordRequired(bool InPasswordRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolutionToBeApplied(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetReflexMode(ENVidiaReflexMode NewReflexMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousItemEnabledOnController(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotosensitiveMode(bool modeOn);
    
    UFUNCTION(BlueprintCallable)
    void SetNvidiaDlssSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetNvidiaDlssMode(UDLSSMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseYSensitivity(float newSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseXSensitivity(float newSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetModdingSortBy(uint8 SortField, bool SortAscending);
    
    UFUNCTION(BlueprintCallable)
    void SetJukeboxStreamerMode(bool InStreamerMode);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertMouseWheel(bool invertMouseWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertMouse(bool NewInvertMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertFlightControls(bool Invert);
    
    UFUNCTION(BlueprintCallable)
    void SetInputSource(EFSDInputSource NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadBobbingScale(float NewHeadbobbingScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRColorGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGrapplingHookAutoSwitch(bool shouldAutoSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float gamme);
    
    UFUNCTION(BlueprintCallable)
    void SetGameServerName(const int32 localUserNum, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetDx12EnabledToBeApplied(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableMasterEQ(bool B);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDifficultySelected(UDifficultySetting* Difficulty, bool IsSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDebugLocalizerMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentUserSaveSlotName(UObject* WorldContextObject, const FString& saveSlotName, ESaveSlotChangeProcedure changeProcedure);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleGraphicsMode(EConsoleGraphicsMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckForOutOfBoundsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetChatFontSize(int32 inFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetChatFadeTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetChatEnabledOnController(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowBlood(bool bloodAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeScale(float NewCameraShakeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRefreshServerlist(bool Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetAudioOutputDevice(UObject* WorldContextObject, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    bool SetAudioInputDevice(const FString& DeviceName);
    
    UFUNCTION(BlueprintCallable)
    void SetAppearOffline(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingType(int32 NewAntiAliasingType);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFSRSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetAMDFSRMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAimSensitivity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAimOuterAcceleration(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDeadZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetGraphicsChanges();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerSettings();
    
    UFUNCTION(BlueprintCallable)
    void PostInitFSDUserSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpscalingTypeSupported(int32 Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNvReflexAvailable();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsDx12Enabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugLocalizerModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentInputSource(EFSDInputSource InputSource);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeDifficultySelection(UObject* WorldContext, const TArray<UDifficultySetting*> StartSelection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetZiplineGunAutoSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabledToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume(EVolumeType volumeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleTerrainScanner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseToggleLaserpointer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseStreamerProgram() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSeparateSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseProfanityFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHoldToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDefaultAudioOutputDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseCustomUIScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpscalingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIDPIScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialHintsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETurn180Mode GetTurn180Mode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTemporalAAUpscalingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESteamSearchRegion GetSteamSearchRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUIAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowSandboxLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShowNetInfoLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowFPS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSharpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetScreenResolutionToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENVidiaReflexMode GetReflexMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPushToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviousItemEnabledOnController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreventLatejoinCharacterDuplication() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaySoundOnChatMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPhotosensitiveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNvidiaDlssSharpness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLSSMode GetNvidiaDlssMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseYSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseXSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    bool GetModdingServerFilterEnabled(uint8 ServerFilter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDifficultySelected(UDifficultySetting* Difficulty) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertMouseWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertFlightControls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDInputSource GetInputSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeadBobbingScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRColorGamma();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGrapplingHookAutoSwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFSDGameUserSettings* GetFSDGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForceFeedbackScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDx12EnabledToBeApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownCameraTurnDirection(EFSDInputSource InputSource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableMasterEQ();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentUserSaveSlotName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDInputSource GetCurrentInputSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentAudioInputDeviceName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAudioInputDeviceAmplitude(int32 localUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EConsoleGraphicsMode GetConsoleGraphicsMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheckForOutOfBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChatFontSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChatFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChatEnabledOnController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraShakeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRefreshServerlist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAudioOutputDeviceName(UObject* WorldContextObject, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAppearOffline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAMDFSRSharpness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAMDFSRMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOuterAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GameServerNameFiltered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GameServerName() const;
    
    UFUNCTION(BlueprintCallable)
    void FSDSetResolutionScale(float NewScaleNormalized);
    
    UFUNCTION(BlueprintCallable)
    static bool FSDSetCurrentLanguage(UObject* WorldContextObject, const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    static UFSDGameUserSettings* FSDGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomKeyBindings(bool InGamepadKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowBlood() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsChanges();
    
    UFUNCTION(BlueprintCallable)
    void ApplyConsoleGraphicsMode();
    
};

