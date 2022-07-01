#include "FSDGameUserSettings.h"

class UObject;
class USoundClass;
class APlayerController;
class UDifficultySetting;
class UFSDGameUserSettings;

void UFSDGameUserSettings::UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice) {
}

void UFSDGameUserSettings::UpdateForceFeedbackScaleOnController(APlayerController* Controller) {
}

bool UFSDGameUserSettings::ToggleTranslatorDebugMode() {
    return false;
}

bool UFSDGameUserSettings::ToggleShowUpgradeExtraDetails() {
    return false;
}

void UFSDGameUserSettings::ToggleModdingServerFilter(uint8 ServerFilter, bool Enable) {
}

void UFSDGameUserSettings::SetZiplineGunAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetVSyncEnabledToBeApplied(bool bEnable) {
}

void UFSDGameUserSettings::SetVolume(EVolumeType volumeType, float Volume) {
}

void UFSDGameUserSettings::SetVoiceChatEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetUseToggleTerrainScanner(bool useToggleTerrainScanner) {
}

void UFSDGameUserSettings::SetUseToggleLaserpointer(bool NewUseToggleLaserpointer) {
}

void UFSDGameUserSettings::SetUseStreamerProgram(bool NewUseStreamerProgram) {
}

void UFSDGameUserSettings::SetUseSeparateSensitivity(bool newSetting) {
}

void UFSDGameUserSettings::SetUseProfanityFilter(bool shouldUse) {
}

void UFSDGameUserSettings::SetUseHoldToRun(bool NewUseHoldToRun) {
}

void UFSDGameUserSettings::SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault) {
}

void UFSDGameUserSettings::SetUseCustomUIScale(bool UseCustomScale) {
}

void UFSDGameUserSettings::SetUpscalingType(int32 Type) {
}

void UFSDGameUserSettings::SetUIDPIScale(float uiscale) {
}

void UFSDGameUserSettings::SetTutorialHintsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetTurn180Mode(ETurn180Mode InMode) {
}

void UFSDGameUserSettings::SetTemporalAAUpscalingEnabled(bool bEnable) {
}

void UFSDGameUserSettings::SetSwapControllerThumbsticks(bool InSwapThumbsticks) {
}

void UFSDGameUserSettings::SetSteamSearchRegion(ESteamSearchRegion InRegion) {
}

void UFSDGameUserSettings::SetShowUIAnimations(bool shouldShow) {
}

void UFSDGameUserSettings::SetShowSubtitles(bool Show) {
}

void UFSDGameUserSettings::SetShowSandboxLabel(bool InShowLabel) {
}

void UFSDGameUserSettings::SetShowNetInfoLevel(int32 Level) {
}

void UFSDGameUserSettings::SetShowFPS(bool Visible) {
}

void UFSDGameUserSettings::SetSharpening(float NewSharpening) {
}

void UFSDGameUserSettings::SetServerSearchPasswordRequired(bool InPasswordRequired) {
}

void UFSDGameUserSettings::SetScreenResolutionToBeApplied(FIntPoint Resolution) {
}

void UFSDGameUserSettings::SetReflexMode(ENVidiaReflexMode NewReflexMode) {
}

void UFSDGameUserSettings::SetPushToTalk(bool bEnable) {
}

void UFSDGameUserSettings::SetPreviousItemEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetPreventLatejoinCharacterDuplication(bool prevent) {
}

void UFSDGameUserSettings::SetPlaySoundOnChatMessage(bool playSoundOnMessage) {
}

void UFSDGameUserSettings::SetPhotosensitiveMode(bool modeOn) {
}

void UFSDGameUserSettings::SetNvidiaDlssSharpness(float Sharpness) {
}

void UFSDGameUserSettings::SetNvidiaDlssMode(UDLSSMode Mode) {
}

void UFSDGameUserSettings::SetMouseYSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetMouseXSensitivity(float newSensitivity) {
}

void UFSDGameUserSettings::SetModdingSortBy(uint8 SortField, bool SortAscending) {
}

void UFSDGameUserSettings::SetJukeboxStreamerMode(bool InStreamerMode) {
}

void UFSDGameUserSettings::SetInvertMouseWheel(bool invertMouseWheel) {
}

void UFSDGameUserSettings::SetInvertMouse(bool NewInvertMouse) {
}

void UFSDGameUserSettings::SetInvertFlightControls(bool Invert) {
}

void UFSDGameUserSettings::SetInputSource(EFSDInputSource NewSource) {
}

void UFSDGameUserSettings::SetHeadBobbingScale(float NewHeadbobbingScale) {
}

void UFSDGameUserSettings::SetHDRColorGamma(float Gamma) {
}

void UFSDGameUserSettings::SetGrapplingHookAutoSwitch(bool shouldAutoSwitch) {
}

void UFSDGameUserSettings::SetGamma(float gamme) {
}

void UFSDGameUserSettings::SetGameServerName(const int32 localUserNum, const FString& Name) {
}

void UFSDGameUserSettings::SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode) {
}

void UFSDGameUserSettings::SetFOV(float NewFOV) {
}

void UFSDGameUserSettings::SetForceFeedbackScale(float Scale) {
}

void UFSDGameUserSettings::SetDx12EnabledToBeApplied(bool bEnable) {
}

void UFSDGameUserSettings::SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection) {
}

void UFSDGameUserSettings::SetDisableMasterEQ(bool B) {
}

void UFSDGameUserSettings::SetDifficultySelected(UDifficultySetting* Difficulty, bool IsSelected) {
}

void UFSDGameUserSettings::SetDebugLocalizerMode(bool bEnable) {
}

void UFSDGameUserSettings::SetCurrentUserSaveSlotName(UObject* WorldContextObject, const FString& saveSlotName, ESaveSlotChangeProcedure changeProcedure) {
}

void UFSDGameUserSettings::SetConsoleGraphicsMode(EConsoleGraphicsMode Mode) {
}

void UFSDGameUserSettings::SetCheckForOutOfBoundsEnabled(bool Enabled) {
}

void UFSDGameUserSettings::SetChatFontSize(int32 inFontSize) {
}

void UFSDGameUserSettings::SetChatFadeTime(float FadeTime) {
}

void UFSDGameUserSettings::SetChatEnabledOnController(bool InEnabled) {
}

void UFSDGameUserSettings::SetCanShowBlood(bool bloodAllowed) {
}

void UFSDGameUserSettings::SetCameraShakeScale(float NewCameraShakeScale) {
}

void UFSDGameUserSettings::SetAutoRefreshServerlist(bool Value) {
}

bool UFSDGameUserSettings::SetAudioOutputDevice(UObject* WorldContextObject, const FString& DeviceID) {
    return false;
}

bool UFSDGameUserSettings::SetAudioInputDevice(const FString& DeviceName) {
    return false;
}

void UFSDGameUserSettings::SetAppearOffline(bool bEnable) {
}

void UFSDGameUserSettings::SetAntiAliasingType(int32 NewAntiAliasingType) {
}

void UFSDGameUserSettings::SetAMDFSRSharpness(float Sharpness) {
}

void UFSDGameUserSettings::SetAMDFSRMode(int32 Mode) {
}

void UFSDGameUserSettings::SetAimSensitivity(float NewValue) {
}

void UFSDGameUserSettings::SetAimOuterAcceleration(float NewValue) {
}

void UFSDGameUserSettings::SetAimDeadZone(float NewValue) {
}

void UFSDGameUserSettings::ResetGraphicsChanges() {
}

void UFSDGameUserSettings::ResetControllerSettings() {
}

void UFSDGameUserSettings::PostInitFSDUserSettings(UObject* WorldContextObject) {
}

bool UFSDGameUserSettings::IsVoiceChatEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsUpscalingTypeSupported(int32 Type) const {
    return false;
}

bool UFSDGameUserSettings::IsNvReflexAvailable() {
    return false;
}

bool UFSDGameUserSettings::IsDx12Enabled() {
    return false;
}

bool UFSDGameUserSettings::IsDebugLocalizerModeEnabled() const {
    return false;
}

bool UFSDGameUserSettings::IsCurrentInputSource(EFSDInputSource InputSource) {
    return false;
}

void UFSDGameUserSettings::InitializeDifficultySelection(UObject* WorldContext, const TArray<UDifficultySetting*> StartSelection) {
}

bool UFSDGameUserSettings::HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo) {
    return false;
}

bool UFSDGameUserSettings::GetZiplineGunAutoSwitch() const {
    return false;
}

bool UFSDGameUserSettings::GetVSyncEnabledToBeApplied() {
    return false;
}

float UFSDGameUserSettings::GetVolume(EVolumeType volumeType) {
    return 0.0f;
}

bool UFSDGameUserSettings::GetUseToggleTerrainScanner() const {
    return false;
}

bool UFSDGameUserSettings::GetUseToggleLaserpointer() const {
    return false;
}

bool UFSDGameUserSettings::GetUseStreamerProgram() const {
    return false;
}

bool UFSDGameUserSettings::GetUseSeparateSensitivity() const {
    return false;
}

bool UFSDGameUserSettings::GetUseProfanityFilter() const {
    return false;
}

bool UFSDGameUserSettings::GetUseHoldToRun() const {
    return false;
}

bool UFSDGameUserSettings::GetUseDefaultAudioOutputDevice() const {
    return false;
}

bool UFSDGameUserSettings::GetUseCustomUIScale() {
    return false;
}

int32 UFSDGameUserSettings::GetUpscalingType() const {
    return 0;
}

float UFSDGameUserSettings::GetUIDPIScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetTutorialHintsEnabled() const {
    return false;
}

ETurn180Mode UFSDGameUserSettings::GetTurn180Mode() const {
    return ETurn180Mode::PressRun;
}

bool UFSDGameUserSettings::GetTemporalAAUpscalingEnabled() const {
    return false;
}

ESteamSearchRegion UFSDGameUserSettings::GetSteamSearchRegion() const {
    return ESteamSearchRegion::Close;
}

bool UFSDGameUserSettings::GetShowUIAnimations() const {
    return false;
}

bool UFSDGameUserSettings::GetShowSubtitles() const {
    return false;
}

bool UFSDGameUserSettings::GetShowSandboxLabel() const {
    return false;
}

int32 UFSDGameUserSettings::GetShowNetInfoLevel() const {
    return 0;
}

bool UFSDGameUserSettings::GetShowFPS() const {
    return false;
}

float UFSDGameUserSettings::GetSharpening() const {
    return 0.0f;
}

FIntPoint UFSDGameUserSettings::GetScreenResolutionToBeApplied() {
    return FIntPoint{};
}

ENVidiaReflexMode UFSDGameUserSettings::GetReflexMode() const {
    return ENVidiaReflexMode::Disabled;
}

bool UFSDGameUserSettings::GetPushToTalk() const {
    return false;
}

bool UFSDGameUserSettings::GetPreviousItemEnabledOnController() const {
    return false;
}

bool UFSDGameUserSettings::GetPreventLatejoinCharacterDuplication() const {
    return false;
}

bool UFSDGameUserSettings::GetPlaySoundOnChatMessage() const {
    return false;
}

bool UFSDGameUserSettings::GetPhotosensitiveMode() const {
    return false;
}

float UFSDGameUserSettings::GetNvidiaDlssSharpness() const {
    return 0.0f;
}

UDLSSMode UFSDGameUserSettings::GetNvidiaDlssMode() const {
    return UDLSSMode::Off;
}

float UFSDGameUserSettings::GetMouseYSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetMouseXSensitivity() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetModdingServerFilterEnabled(uint8 ServerFilter) {
    return false;
}

bool UFSDGameUserSettings::GetIsDifficultySelected(UDifficultySetting* Difficulty) const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouseWheel() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertMouse() const {
    return false;
}

bool UFSDGameUserSettings::GetInvertFlightControls() const {
    return false;
}

EFSDInputSource UFSDGameUserSettings::GetInputSource() {
    return EFSDInputSource::None;
}

float UFSDGameUserSettings::GetHeadBobbingScale() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetHDRColorGamma() {
    return 0.0f;
}

bool UFSDGameUserSettings::GetGrapplingHookAutoSwitch() const {
    return false;
}

float UFSDGameUserSettings::GetGamma() const {
    return 0.0f;
}

TEnumAsByte<EWindowMode::Type> UFSDGameUserSettings::GetFullscreenModeToBeApplied() {
    return EWindowMode::Fullscreen;
}

UFSDGameUserSettings* UFSDGameUserSettings::GetFSDGameUserSettings() {
    return NULL;
}

float UFSDGameUserSettings::GetFOV() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetForceFeedbackScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetDx12EnabledToBeApplied() {
    return false;
}

float UFSDGameUserSettings::GetDownCameraTurnDirection(EFSDInputSource InputSource) const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetDisableMasterEQ() {
    return false;
}

FString UFSDGameUserSettings::GetCurrentUserSaveSlotName() {
    return TEXT("");
}

EFSDInputSource UFSDGameUserSettings::GetCurrentInputSource() {
    return EFSDInputSource::None;
}

bool UFSDGameUserSettings::GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice) {
    return false;
}

FString UFSDGameUserSettings::GetCurrentAudioInputDeviceName() {
    return TEXT("");
}

float UFSDGameUserSettings::GetCurrentAudioInputDeviceAmplitude(int32 localUserId) {
    return 0.0f;
}

EConsoleGraphicsMode UFSDGameUserSettings::GetConsoleGraphicsMode() {
    return EConsoleGraphicsMode::Fidelity;
}

bool UFSDGameUserSettings::GetCheckForOutOfBounds() {
    return false;
}

int32 UFSDGameUserSettings::GetChatFontSize() const {
    return 0;
}

float UFSDGameUserSettings::GetChatFadeTime() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetChatEnabledOnController() const {
    return false;
}

float UFSDGameUserSettings::GetCameraShakeScale() const {
    return 0.0f;
}

bool UFSDGameUserSettings::GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices) {
    return false;
}

bool UFSDGameUserSettings::GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions) {
    return false;
}

bool UFSDGameUserSettings::GetAutoRefreshServerlist() const {
    return false;
}

FString UFSDGameUserSettings::GetAudioOutputDeviceName(UObject* WorldContextObject, const FString& DeviceID) {
    return TEXT("");
}

bool UFSDGameUserSettings::GetAppearOffline() {
    return false;
}

int32 UFSDGameUserSettings::GetAntiAliasingType() const {
    return 0;
}

float UFSDGameUserSettings::GetAMDFSRSharpness() const {
    return 0.0f;
}

int32 UFSDGameUserSettings::GetAMDFSRMode() const {
    return 0;
}

float UFSDGameUserSettings::GetAimSensitivity() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimOuterAcceleration() const {
    return 0.0f;
}

float UFSDGameUserSettings::GetAimDeadZone() const {
    return 0.0f;
}

FString UFSDGameUserSettings::GameServerNameFiltered() const {
    return TEXT("");
}

FString UFSDGameUserSettings::GameServerName() const {
    return TEXT("");
}

void UFSDGameUserSettings::FSDSetResolutionScale(float NewScaleNormalized) {
}

bool UFSDGameUserSettings::FSDSetCurrentLanguage(UObject* WorldContextObject, const FString& Culture) {
    return false;
}

UFSDGameUserSettings* UFSDGameUserSettings::FSDGameUserSettings() {
    return NULL;
}

bool UFSDGameUserSettings::ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode) {
    return false;
}

void UFSDGameUserSettings::ClearCustomKeyBindings(bool InGamepadKeys) {
}

bool UFSDGameUserSettings::CanShowBlood() const {
    return false;
}

void UFSDGameUserSettings::ApplyGraphicsChanges() {
}

void UFSDGameUserSettings::ApplyConsoleGraphicsMode() {
}

UFSDGameUserSettings::UFSDGameUserSettings() {
    this->bJukeboxStreamerMode = true;
    this->bGraphicSettingsChanged = false;
    this->ServerSearchRegion = 3;
    this->ServerSearchPasswordRequired = true;
    this->volumeCharacterVoice = 101.01f;
    this->volumeMissionControl = 100.37f;
    this->volumeMaster = 57.92f;
    this->volumeSFX = 97.90f;
    this->volumeMusic = 0.58f;
    this->CurrentAudioOutputDeviceId = TEXT("{0.0.0.00000000}.{2a5cebd2-74c5-49ee-b332-663973012ccd}");
    this->UseDefaultAudioOutputDevice = true;
    this->Sharpening = 0.00f;
    this->AntiAliasingType = 1;
    this->TemporalAAUpsamplingEnabled = false;
    this->volumeVoice = 99.74f;
    this->UpscalingType = 1;
    this->AmdFsrMode = 0;
    this->AmdFsrSharpness = 0.22f;
    this->NvidiaDlssMode = UDLSSMode::Auto;
    this->NvidiaDlssSharpness = 0.50f;
    this->FSDResolutionScale = 1.00f;
    this->ReflexMode = ENVidiaReflexMode::Disabled;
    this->soundClassCharacterVoices = NULL;
    this->soundClassMissionControl = NULL;
    this->soundClassMaster = NULL;
    this->soundClassSFX = NULL;
    this->soundClassUI = NULL;
    this->soundClassMusic = NULL;
    this->soundClassVoice = NULL;
    this->ChatFontSize = 14;
    this->bUseVoiceChat = false;
    this->bUsePushToTalk = true;
    this->AppearOffline = false;
    this->AutoRefreshServerlist = true;
    this->MouseXSensitivity = 900.92f;
    this->MouseYSensitivity = 600.00f;
    this->UseSeperateSensetivity = false;
    this->InvertMouse = false;
    this->InvertScroolWheel = false;
    this->UseHoldToRun = false;
    this->UseToggleLaserpointer = false;
    this->FOV = 100.89f;
    this->HeadbobbingScale = 100.00f;
    this->CameraShakeScale = 100.00f;
    this->ChatFadeTime = 10.00f;
    this->UseStreamerProgram = false;
    this->SoundOnChatMessage = true;
    this->PhotosensitiveMode = false;
    this->ShowUIAnimations = true;
    this->UseProfanityFilter = false;
    this->ForceFeedbackScale = 1.00f;
    this->InvertFlightControls = false;
    this->EnableDx12ByDefault = false;
    this->HDRColorGamma = 1.21f;
    this->ConsoleGraphicsMode = EConsoleGraphicsMode::Fidelity;
    this->DownedTurnDirection_Controller = 1.00f;
    this->DownedTurnDirection_Mouse = -1.00f;
    this->UIDPIScale = 80.63f;
    this->EnableCustomUIScale = false;
    this->CheckCursorOutOfBounds = false;
    this->VSyncToBeApplied = false;
    this->Dx12ToBeApplied = false;
    this->InFullscreenModeToBeApplied = EWindowMode::Fullscreen;
    this->InFullscreenModeToBeAppliedValid = false;
    this->VSyncToBeAppliedValid = false;
    this->Dx12ToBeAppliedValid = false;
    this->ResolutionToBeAppliedValid = false;
    this->EscMenuActive = false;
    this->bShowUpgradeExtraDetails = false;
    this->LastNiagaraShaderVerions = 63118;
    this->CurrentInputSource = EFSDInputSource::MouseAndKeyboard;
    this->RequestedInputSource = EFSDInputSource::None;
    this->SwapControllerThumbsticks = false;
    this->bTutorialHintsEnabled = false;
    this->bShowSubtitles = false;
    this->bShowFPS = false;
    this->ShowNetInfoLevel = 0;
    this->bCanShowBlood = true;
    this->PreventLatejoinCharacterDuplication = false;
    this->TranslatorDebugModeEnabled = false;
    this->SelectedDifficultyLevels.AddDefaulted(5);
    this->DifficultyLevelsAddedByDefault.AddDefaulted(5);
}

