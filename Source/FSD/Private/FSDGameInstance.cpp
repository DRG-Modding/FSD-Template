#include "FSDGameInstance.h"
#include "Templates/SubclassOf.h"
#include "FSDCloudLoadSave.h"
#include "FSDSessionUpdater.h"
#include "FSDSendToURL.h"

class AProceduralSetup;
class AActor;
class UGeneratedMission;
class UObject;
class UFSDSaveGame;
class ACharacterSelectionSwitcher;
class UWorld;
class UNetDriver;
class UMutator;
class UTemporaryBuff;
class AFSDPlayerController;
class APlayerCharacter;
class UIconGenerationManager;
class UTexture2D;
class UItemSkin;
class UHUDWarningWidget;
class USoundBase;

void UFSDGameInstance::UpdateGlobelMissionSeed() {
}

void UFSDGameInstance::StopPhotographyInputProcessor() {
}

void UFSDGameInstance::StopPersonalAnalytics() {
}

void UFSDGameInstance::StartPhotographyInputProcessor() {
}

void UFSDGameInstance::StartPersonalAnalytics() {
}

AProceduralSetup* UFSDGameInstance::SpawnProcedural() {
    return NULL;
}

bool UFSDGameInstance::ShouldPendingRewardsBeShown() const {
    return false;
}

bool UFSDGameInstance::ShouldPendingRewardsBeGiven() const {
    return false;
}

void UFSDGameInstance::SetViewer3DClass(TSubclassOf<AActor> NewClass, ECharselectionCameraLocation Location) {
}

void UFSDGameInstance::SetSteamServerJoinStatus(ESteamServerJoinStatus NewStatus) {
}

void UFSDGameInstance::SetSteamSearchRegion(ESteamSearchRegion NewRegion) {
}

void UFSDGameInstance::SetServerSearchOptions(const FFSDServerSearchOptions& options) {
}

void UFSDGameInstance::SetServerSearchActive(bool Active) {
}

void UFSDGameInstance::SetSelectedMission(UGeneratedMission* mission, bool updateSessionSettings) {
}

void UFSDGameInstance::SetProceduralMap(TSubclassOf<AProceduralSetup> procedural) {
}

void UFSDGameInstance::SetPendingInviteJoinModding(const FBlueprintSessionResult& Result) {
}

void UFSDGameInstance::SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text) {
}

void UFSDGameInstance::SetLoaderWorldVisible(bool V, bool resetHud) {
}

void UFSDGameInstance::SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed) {
}

void UFSDGameInstance::SetHasSeenInfoScreen() {
}

void UFSDGameInstance::SetGlobalMissionSeed(int32 Seed) {
}

void UFSDGameInstance::SetFSDPassword(const FString& pw) {
}


void UFSDGameInstance::SetCharacterSelectionWorldVisible(bool V, ECharselectionCameraLocation cameraLocation, bool resetHud, ECharacterSelectorItemStatus itemStatus) {
}

void UFSDGameInstance::SetCharacterSelectionSwitcher(ACharacterSelectionSwitcher* switcher) {
}

void UFSDGameInstance::SendSteamInfo() {
}

void UFSDGameInstance::ScheduleResetOfWorldsAndGameDataThenOpenLevel(FName LevelName) {
}

void UFSDGameInstance::RestoreCursors() {
}

void UFSDGameInstance::ResetViewer3DClass() {
}

void UFSDGameInstance::ResetSaveGame() {
}

void UFSDGameInstance::ResetAlwaysLoadedWorldsAndGameData() {
}

void UFSDGameInstance::RemoveRemporaryBuff() {
}

void UFSDGameInstance::RemoveBosco() {
}

void UFSDGameInstance::RefreshIsGameModded() {
}

void UFSDGameInstance::PostInit(bool reload) {
}

void UFSDGameInstance::PairingUsePreviousProfile() {
}

void UFSDGameInstance::PairingUseNewProfile() {
}

void UFSDGameInstance::OnNewFSDSessionID(const FString& sessionId) {
}

void UFSDGameInstance::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> failType, const FString& errorMessage) {
}


void UFSDGameInstance::LoadSaveGame(UFSDSaveGame* toLoad) {
}

bool UFSDGameInstance::IsPendingInvitePasswordProtected() {
    return false;
}

bool UFSDGameInstance::IsPendingInviteModded() {
    return false;
}

bool UFSDGameInstance::IsMutatorActive(TSubclassOf<UMutator> mutatorClass) const {
    return false;
}

bool UFSDGameInstance::IsGameModded() {
    return false;
}

bool UFSDGameInstance::IsFreeBeerRewardActive() const {
    return false;
}

bool UFSDGameInstance::IsCharacterSelectionWorldVisible() const {
    return false;
}

bool UFSDGameInstance::IsCampaignMission() {
    return false;
}

bool UFSDGameInstance::HasTooManyModsEnabled() const {
    return false;
}

bool UFSDGameInstance::HasSignedIn() {
    return false;
}

bool UFSDGameInstance::HasPendingInvite() const {
    return false;
}

bool UFSDGameInstance::HasPendingActivity() const {
    return false;
}

bool UFSDGameInstance::HasAnalytics() {
    return false;
}

void UFSDGameInstance::GraphicsUserSettingsChanged() {
}

void UFSDGameInstance::GiveTemporaryBuff(UTemporaryBuff* buff, APlayerCharacter* Player) {
}

FVector2D UFSDGameInstance::GetViewportSize() {
    return FVector2D{};
}

TSoftClassPtr<AProceduralSetup> UFSDGameInstance::GetSoftReferenceToPLS() {
    return NULL;
}

TArray<FBlueprintSessionResult> UFSDGameInstance::GetServersFriendsArePlaying(TArray<FBlueprintSessionResult> servers) {
    return TArray<FBlueprintSessionResult>();
}

bool UFSDGameInstance::GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const {
    return false;
}

TArray<UMutator*> UFSDGameInstance::GetMutators(TSubclassOf<UMutator> mutatorClass) const {
    return TArray<UMutator*>();
}

int32 UFSDGameInstance::GetMaxPublicConnections() const {
    return 0;
}

int32 UFSDGameInstance::GetMaxAllowedMods() const {
    return 0;
}

AFSDPlayerController* UFSDGameInstance::GetLocalFSDPlayerController() const {
    return NULL;
}

UIconGenerationManager* UFSDGameInstance::GetIconGenerationManager() const {
    return NULL;
}

bool UFSDGameInstance::GetHasSeenInfoScreen() {
    return false;
}

int32 UFSDGameInstance::GetGlobalMissionSeed() const {
    return 0;
}

UGeneratedMission* UFSDGameInstance::GetGeneratedMission() const {
    return NULL;
}

UMutator* UFSDGameInstance::GetFirstMutator(TSubclassOf<UMutator> mutatorClass) const {
    return NULL;
}

FString UFSDGameInstance::GetDisconnectErrorCode() const {
    return TEXT("");
}

TArray<FNetworkConnectionInfo> UFSDGameInstance::GetConnectionInfo() {
    return TArray<FNetworkConnectionInfo>();
}

APlayerCharacter* UFSDGameInstance::GetCharacterSelectorCharacter() {
    return NULL;
}

void UFSDGameInstance::GameUserSettingsChanged() {
}

void UFSDGameInstance::CloseSessionLobby() {
}

void UFSDGameInstance::ClearPendingRewards() {
}

void UFSDGameInstance::ClearDisconnectError() {
}

void UFSDGameInstance::ChangeSkinPreview(UItemSkin* PreviewSkin) {
}

void UFSDGameInstance::CancelJoin() {
}


UHUDWarningWidget* UFSDGameInstance::AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound) {
    return NULL;
}

void UFSDGameInstance::AddToFriendSessions(const FString& friendSessionId, const FString& friendName) {
}

void UFSDGameInstance::AddStatValue(const FString& Key, float Value) {
}

void UFSDGameInstance::AddStatCount(const FString& Key, int32 count) {
}

UFSDGameInstance::UFSDGameInstance() {
    this->ShowingReconnectScreen = false;
    this->ProceduralSetup = NULL;
    this->HasStartedAMission = false;
    this->FSDPrivateServer = false;
    this->SoloSession = false;
    this->IsJoiningInvite = false;
    this->FirstTimeInFrontend = true;
    this->SessionFirstStartOnSpaceRig = true;
    this->ShowFirstCharacterSelector = true;
    this->ShowSaveWarning = true;
    this->WorldViewTargetDummy = NULL;
    this->MissionResultInfo = NULL;
    this->LoaderSequencePlaying = false;
    this->CharacterSelectionLastViewTarget = NULL;
    this->HasSeenInfoScreen = false;
    this->DEBUGSpawnRandomMissions = false;
    this->DEBUGFixedPLSSeed = -1;
    this->DEBUGSeedOverride = 1;
    this->CanPlayOnline = true;
    this->CanCommunicateOnline = true;
    this->GoogleAnalyticsWI = NULL;
    this->ForcedSpecialEvent = NULL;
    this->ShowMinerManualWorkInProgress = false;
    this->LastDreadnaughtKillTime = -1.00f;
    this->CharacterSelectionSwitcher = NULL;
    this->bGameSettingsChanged = false;
    this->ServerSearchActive = false;
    this->IsOnPressStartScreen = false;
    this->HasSeenStartScreen = false;
    this->ProceduralLevel = NULL;
    this->IconGenerationManagerClass = NULL;
    this->IconGenerationManager = NULL;
    this->CampaignManager = NULL;
    this->DeepDiveManager = NULL;
    this->GeneratedMission = NULL;
    this->DesiredDifficulty = NULL;
    this->SaveGame = NULL;
    this->DisconnectReason = EDisconnectReason::None;
    this->ShowCharacterSelectionWorld = false;
    this->Viewer3DClass = NULL;
    this->ShowLoaderWorld = false;
    this->CharacterSelectionWorldActive = false;
    this->MixerInteractivityEnabled = false;
    this->LoaderWorldActive = false;
    this->ResetHUDWhenReturning = false;
    this->MovieModeActive = false;
    this->MovieModeActiveInSpacerig = false;
    this->MovieModeStartAtOrigin = false;
    this->MovieModeStartWithCameraShake = false;
    this->ActiveForgeSchematic = NULL;
    this->FSDCloudLoadSave = CreateDefaultSubobject<UFSDCloudLoadSave>(TEXT("FSDCloudLoadSave"));
    this->SessionUpdater = CreateDefaultSubobject<UFSDSessionUpdater>(TEXT("SessionUpdater"));
    this->SendToURL = CreateDefaultSubobject<UFSDSendToURL>(TEXT("FSDSendToURL"));
    this->FriendsAndInvites = NULL;
    this->SessionStartTime = 0.00f;
    this->SessionStartTimestamp = 0;
    this->InKBytesPerSecond = 0.00f;
    this->OutKBytesPerSecond = 0.00f;
    this->PreSpawnNigaraParticles = true;
    this->TemporaryBuff = NULL;
    this->NextLoaderLevel = EAlwaysLoadedWorlds::CharacterViewer;
    this->ControllerVibrationSubmix = NULL;
    this->ControllerSpeakerSubmix = NULL;
}

