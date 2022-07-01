#include "UGCSubsystem.h"

class UObject;
class UUGCPackage;

void UUGCSubsystem::SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods) {
}

void UUGCSubsystem::SetModsAsRecentlyInstalled(TArray<FString> RecentMods) {
}

void UUGCSubsystem::SetCheckGameVersion(bool ShouldCheck) {
}

void UUGCSubsystem::RemoveRequestOfType(EModioRequestType requestType) {
}

void UUGCSubsystem::MarkRecentlyInstalledModsSuccesful() {
}

void UUGCSubsystem::K2_RequestTermsOfUse(UObject* WorldContext, FLatentActionInfo LatentInfo) {
}

bool UUGCSubsystem::K2_RequestSubscribe(const FString& ModId) {
    return false;
}

void UUGCSubsystem::K2_RequestModThumbnailById(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId) {
}

void UUGCSubsystem::K2_RequestModThumbnail(UObject* WorldContext, FLatentActionInfo LatentInfo, UUGCPackage* Package) {
}

void UUGCSubsystem::K2_RequestModMetaData(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModioStringID, int64& ModId) {
}

void UUGCSubsystem::K2_RequestModDependencyList(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId, FString& outParentId, TArray<FString>& outModIds) {
}

void UUGCSubsystem::K2_RequestHasHostHiddenMods(UObject* WorldContext, FLatentActionInfo LatentInfo, TArray<FString> sHostModIds, TArray<FString> sClientModIds, bool& outHidden) {
}

void UUGCSubsystem::K2_RequestFetchModUpdates() {
}

void UUGCSubsystem::K2_RequestAuthentication() {
}

bool UUGCSubsystem::IsModPendingUninstall(UUGCPackage* InMod) const {
    return false;
}

bool UUGCSubsystem::HasOutstadingRequestOfType(EModioRequestType requestType) {
    return false;
}

TArray<FString> UUGCSubsystem::GetNamesOfModsPendingUninstall() {
    return TArray<FString>();
}

TArray<FString> UUGCSubsystem::GetNamesOfModsPendingInstall() {
    return TArray<FString>();
}

bool UUGCSubsystem::GetCheckGameVersion() {
    return false;
}

bool UUGCSubsystem::FetchModsForSession(TArray<FString> HostMods, UUGCSubsystem::FUGRequiredModsFetched OnModsFetched, UUGCSubsystem::FUGCHiddenMods OnHostHasHiddenMods) {
    return false;
}

void UUGCSubsystem::EnableModioModManagement() {
}

void UUGCSubsystem::DisableModioModManagement() {
}

void UUGCSubsystem::ApplyPendingMods(bool FromJoining) {
}

UUGCSubsystem::UUGCSubsystem() {
    this->forceNoMods = false;
    this->noInternetAccess = false;
    this->noModioUser = false;
    this->IsJoining = false;
    this->UGCRegistry = NULL;
    this->UGCSettings = NULL;
    this->UGCLatentActionManager = NULL;
    this->ModioTermsAndConditionsAccepted = false;
    this->IsModioModManagementEnabled = false;
    this->IsLocalUserModsInstalled = false;
}

