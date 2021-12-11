#pragma once
#include "CoreMinimal.h"
#include "CharacterOptions.h"
#include "EConsoleGraphicsMode.h"
#include "GameFramework/GameUserSettings.h"
#include "ControllerSettings.h"
#include "ModdingUISettings.h"
#include "HUDElements.h"
#include "UObject/NoExportTypes.h"
#include "EFSDInputSource.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "CustomKeyBinding.h"
#include "EVolumeType.h"
#include "ESteamSearchRegion.h"
#include "ESaveSlotChangeProcedure.h"
#include "FSDGameUserSettings.generated.h"

class USoundClass;
class APlayerController;
class UObject;
class UDifficultySetting;
class UFSDGameUserSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnFontSizeChanged, int32, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnShowFPSChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnUseHoldToRunChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnFOVChanged, float, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameUserSettingsOnModdingSettingsChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnLanguageChanged, const FString&, Culture);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnJukeboxStreamerModeChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnGameServerNameChanged, const FString&, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnCanShowBloodChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnInputSourceChanged, EFSDInputSource, InputSource);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnEnableTutorialHintsChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnShowNetInfoLevelChanged, int32, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnDx12Enabled, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameUserSettingsOnShowUpgradeExtraDetailsChanged, bool, NewValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameUserSettingsOnCustomKeyBindingsChanged);

UCLASS()
class UFSDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnUseHoldToRunChanged OnUseHoldToRunChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnFOVChanged OnFOVChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameUserSettingsOnLanguageChanged OnLanguageChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnGameServerNameChanged OnGameServerNameChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnFontSizeChanged OnFontSizeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnJukeboxStreamerModeChanged OnJukeboxStreamerModeChanged;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bJukeboxStreamerMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bGraphicSettingsChanged;
    
    UPROPERTY(Config)
    FString CurrentUserSetSaveSlotName;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnCanShowBloodChanged OnCanShowBloodChanged;
    
    UPROPERTY(Config)
    TMap<FName, bool> NamedBoolSettings;
    
    UPROPERTY(BlueprintReadOnly, Config)
    FModdingUISettings ModdingUISettings;
    
    UPROPERTY(Config)
    int32 ServerSearchRegion;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool ServerSearchPasswordRequired;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnModdingSettingsChanged OnModdingSettingsChanged;
    
    UPROPERTY(Config)
    float volumeCharacterVoice;
    
    UPROPERTY(Config)
    float volumeMissionControl;
    
    UPROPERTY(Config)
    float volumeMaster;
    
    UPROPERTY(Config)
    float volumeSFX;
    
    UPROPERTY(Config)
    float volumeMusic;
    
    UPROPERTY(Config)
    FString CurrentAudioOutputDeviceId;
    
    UPROPERTY(Config)
    bool UseDefaultAudioOutputDevice;
    
    UPROPERTY(Config)
    float Sharpening;
    
    UPROPERTY(Config)
    int32 AntiAliasingType;
    
    UPROPERTY(Config)
    bool TemporalAAUpsamplingEnabled;
    
    UPROPERTY(Config)
    float volumeVoice;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassCharacterVoices;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassMissionControl;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassMaster;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassSFX;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassUI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassMusic;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    USoundClass* soundClassVoice;
    
    UPROPERTY(Config)
    int32 ChatFontSize;
    
    UPROPERTY(Config)
    bool bUseVoiceChat;
    
    UPROPERTY(Config)
    bool bUsePushToTalk;
    
    UPROPERTY(Config)
    FString LocalGameServerName;
    
    UPROPERTY(Config)
    FString LocalGameServerNameFiltered;
    
    UPROPERTY(Config)
    bool AppearOffline;
    
    UPROPERTY(Config)
    bool AutoRefreshServerlist;
    
    UPROPERTY(Config)
    float MouseXSensitivity;
    
    UPROPERTY(Config)
    float MouseYSensitivity;
    
    UPROPERTY(Config)
    bool UseSeperateSensetivity;
    
    UPROPERTY(Config)
    bool InvertMouse;
    
    UPROPERTY(Config)
    bool InvertScroolWheel;
    
    UPROPERTY(Config)
    bool UseHoldToRun;
    
    UPROPERTY(Config)
    bool UseToggleLaserpointer;
    
    UPROPERTY(Config)
    float FOV;
    
    UPROPERTY(Config)
    float HeadbobbingScale;
    
    UPROPERTY(Config)
    float CameraShakeScale;
    
    UPROPERTY(Config)
    float ChatFadeTime;
    
    UPROPERTY(Config)
    bool UseStreamerProgram;
    
    UPROPERTY(Config)
    bool SoundOnChatMessage;
    
    UPROPERTY(Config)
    bool PhotosensitiveMode;
    
    UPROPERTY(Config)
    bool ShowUIAnimations;
    
    UPROPERTY(Config)
    bool UseProfanityFilter;
    
    UPROPERTY(Config)
    float ForceFeedbackScale;
    
    UPROPERTY(Config)
    bool InvertFlightControls;
    
    UPROPERTY(Config)
    bool EnableDx12ByDefault;
    
    UPROPERTY(Config)
    float HDRColorGamma;
    
    UPROPERTY(Config)
    EConsoleGraphicsMode ConsoleGraphicsMode;
    
    UPROPERTY(Config)
    FHUDElements HUDElements;
    
    UPROPERTY(BlueprintReadWrite, Config)
    FCharacterOptions CharacterOptions;
    
protected:
    UPROPERTY(Config)
    float DownedTurnDirection_Controller;
    
    UPROPERTY(Config)
    float DownedTurnDirection_Mouse;
    
public:
    UPROPERTY(Config)
    float UIDPIScale;
    
    UPROPERTY(Transient)
    bool EnableCustomUIScale;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDGameUserSettingsOnInputSourceChanged OnInputSourceChanged;
    
    UPROPERTY(Config)
    bool CheckCursorOutOfBounds;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDGameUserSettingsOnEnableTutorialHintsChanged OnEnableTutorialHintsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnShowFPSChanged OnShowFPSChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnShowNetInfoLevelChanged OnShowNetInfoLevelChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnDx12Enabled OnDx12Enabled;
    
    UPROPERTY(Transient)
    FIntPoint ResolutionToBeApplied;
    
    UPROPERTY(Transient)
    bool VSyncToBeApplied;
    
    UPROPERTY(Transient)
    bool Dx12ToBeApplied;
    
    UPROPERTY(Transient)
    TEnumAsByte<EWindowMode::Type> InFullscreenModeToBeApplied;
    
    UPROPERTY(Transient)
    bool InFullscreenModeToBeAppliedValid;
    
    UPROPERTY(Transient)
    bool VSyncToBeAppliedValid;
    
    UPROPERTY(Transient)
    bool Dx12ToBeAppliedValid;
    
    UPROPERTY(Transient)
    bool ResolutionToBeAppliedValid;
    
    UPROPERTY(Transient)
    bool EscMenuActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bShowUpgradeExtraDetails;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDGameUserSettingsOnShowUpgradeExtraDetailsChanged OnShowUpgradeExtraDetailsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameUserSettingsOnCustomKeyBindingsChanged OnCustomKeyBindingsChanged;
    
    UPROPERTY(Config)
    int32 LastNiagaraShaderVerions;
    
protected:
    UPROPERTY(Config)
    EFSDInputSource CurrentInputSource;
    
    UPROPERTY(Transient)
    EFSDInputSource RequestedInputSource;
    
    UPROPERTY(Config)
    TArray<FCustomKeyBinding> CustomKeyBindings;
    
    UPROPERTY(Config)
    TArray<FCustomKeyBinding> CustomControllerBindings;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool SwapControllerThumbsticks;
    
    UPROPERTY(Config)
    bool bTutorialHintsEnabled;
    
    UPROPERTY(Config)
    bool bShowSubtitles;
    
    UPROPERTY(Config)
    bool bShowFPS;
    
    UPROPERTY(Config)
    int32 ShowNetInfoLevel;
    
    UPROPERTY(Config)
    bool bCanShowBlood;
    
    UPROPERTY(Config)
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(Config)
    bool TranslatorDebugModeEnabled;
    
    UPROPERTY(Transient)
    FString PreviousCulture;
    
    UPROPERTY(Config)
    FControllerSettings ControllerSettings;
    
    UPROPERTY(Config)
    TArray<FGuid> SelectedDifficultyLevels;
    
    UPROPERTY(Config)
    TArray<FGuid> DifficultyLevelsAddedByDefault;
    
public:
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
    void SetUIDPIScale(float uiscale);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialHintsEnabled(bool Enabled);
    
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
    void SetPushToTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotosensitiveMode(bool modeOn);
    
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
    float GetUIDPIScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialHintsEnabled() const;
    
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
    bool GetPushToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreventLatejoinCharacterDuplication() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaySoundOnChatMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPhotosensitiveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseYSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseXSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFSDGameUserSettings();
};

