#include "SessionHandling.h"
#include "Templates/SubclassOf.h"

class UFSDGameInstance;
class UObject;
class UBiome;
class UPlayerCharacterID;
class UMissionTemplate;
class APlayerCharacter;
class UDifficultySetting;

void USessionHandling::StopVoice(UObject* WorldContextObject) {
}

void USessionHandling::StartVoice(UObject* WorldContextObject) {
}

bool USessionHandling::StartSearchForFriends(int32 localUserNum, UFSDGameInstance* GameInstance) {
    return false;
}

void USessionHandling::StartCheckForInstalledDLC(UObject* WorldContextObject) {
}

void USessionHandling::SortServerList(UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, TArray<FBlueprintSessionResult>& servers) {
}

void USessionHandling::ShowStoreUI(UObject* WorldContextObject) {
}

void USessionHandling::ShowInviteUI(UObject* WorldContextObject) {
}

void USessionHandling::JoinOfficialXboxClub(UObject* WorldContextObject) {
}

bool USessionHandling::IsVoiceChatting() {
    return false;
}

bool USessionHandling::IsInActiveSession() {
    return false;
}

bool USessionHandling::IsDisconnectReasonAKick(EDisconnectReason reason) {
    return false;
}

FString USessionHandling::GetVoiceStatus() {
    return TEXT("");
}

FText USessionHandling::GetSessionJoinError(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

bool USessionHandling::GetOnlinePlayerName(int32 localUserNum, FString& Name) {
    return false;
}

EFSDNATType USessionHandling::GetNATType(UObject* WorldContextObject) {
    return EFSDNATType::Open;
}

EMissionStructure USessionHandling::GetMissionStructure(const FBlueprintSessionResult& Result) {
    return EMissionStructure::SingleMission;
}

FString USessionHandling::GetLoginStatus(int32 localUserNum) {
    return TEXT("");
}

FString USessionHandling::GetHostUsername(UObject* WorldContextObject) {
    return TEXT("");
}

FString USessionHandling::GetHostUniqueId(UObject* WorldContextObject) {
    return TEXT("");
}

bool USessionHandling::GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players) {
    return false;
}

FString USessionHandling::GetFriendlyServerNameSanitized(UObject* WorldContextObject) {
    return TEXT("");
}

FString USessionHandling::GetFriendlyServerName(UObject* WorldContextObject) {
    return TEXT("");
}

bool USessionHandling::GetCurrentSessionState(FString& sessionState, FString& ID) {
    return false;
}

bool USessionHandling::FSDUpdateSessionInfo(UObject* WorldContextObject) {
    return false;
}

EFSDMissionStatus USessionHandling::FSDMissionStatus(const FBlueprintSessionResult& Result) {
    return EFSDMissionStatus::SpaceRig;
}

void USessionHandling::FSDListen(UObject* WorldContextObject) {
}

bool USessionHandling::FSDIsSessionValid(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsPrivateServer(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsPasswordRequired(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsModdedServer(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsModdedSandboxServer(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsFullServer(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsEliteDeepDive(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDIsClassLocked(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDHasHiddenModsNotInstalledOnClient(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDHasGameStarted(const FBlueprintSessionResult& Result) {
    return false;
}

bool USessionHandling::FSDGetServerStartTime(const FBlueprintSessionResult& Result, FDateTime& StartTime) {
    return false;
}

FString USessionHandling::FSDGetServerNameSanitized(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

FString USessionHandling::FSDGetServerName(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

FString USessionHandling::FSDGetServerID(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

TArray<FString> USessionHandling::FSDGetRequiredModsToDownload(const FBlueprintSessionResult& Result) {
    return TArray<FString>();
}

FString USessionHandling::FSDGetRegion(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

TArray<UPlayerCharacterID*> USessionHandling::FSDGetPlayerClassIDs(const FBlueprintSessionResult& Result) {
    return TArray<UPlayerCharacterID*>();
}

TArray<TSubclassOf<APlayerCharacter>> USessionHandling::FSDGetPlayerClasses(const FBlueprintSessionResult& Result) {
    return TArray<TSubclassOf<APlayerCharacter>>();
}

TArray<FString> USessionHandling::FSDGetOptionalModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods) {
    return TArray<FString>();
}

int32 USessionHandling::FSDGetNumPlayers(const FBlueprintSessionResult& Result) {
    return 0;
}

TArray<FString> USessionHandling::FSDGetModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods) {
    return TArray<FString>();
}

int32 USessionHandling::FSDGetMissionSeed(const FBlueprintSessionResult& Result) {
    return 0;
}

FString USessionHandling::FSDGetMapName(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

FString USessionHandling::FSDGetHostUserID(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

int32 USessionHandling::FSDGetGlobalMissionSeed(const FBlueprintSessionResult& Result) {
    return 0;
}

float USessionHandling::FSDGetDistanceFloat(const FBlueprintSessionResult& Result) {
    return 0.0f;
}

EServerDistance USessionHandling::FSDGetDistance(const FBlueprintSessionResult& Result) {
    return EServerDistance::Close;
}

UDifficultySetting* USessionHandling::FSDGetDifficulty(const FBlueprintSessionResult& Result) {
    return NULL;
}

FString USessionHandling::FSDGetBuildId(const FBlueprintSessionResult& Result) {
    return TEXT("");
}

bool USessionHandling::FSDCancelFindSessions(UObject* WorldContextObject) {
    return false;
}

bool USessionHandling::FindBestQuickJoinServer(UObject* WorldContextObject, TArray<FBlueprintSessionResult>& sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult) {
    return false;
}

bool USessionHandling::AllowLinkToExternalFeedback(UObject* WorldContextObject) {
    return false;
}

USessionHandling::USessionHandling() {
}

