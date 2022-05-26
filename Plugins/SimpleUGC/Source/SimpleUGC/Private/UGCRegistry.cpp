#include "UGCRegistry.h"

class UUGCPackage;

void UUGCRegistry::UnmountUGCPackages(TArray<FString> ExcludingModIds) {
}

bool UUGCRegistry::UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings) {
    return false;
}

void UUGCRegistry::UnmountSandboxUGCPackages() {
}

void UUGCRegistry::UnmountAllNonVerifiedUGCPackages() {
}

UUGCPackage* UUGCRegistry::TryGetPackageFromId(const FString& ModId) {
    return NULL;
}

void UUGCRegistry::ResetUGCPackagesManipulatedDuringJoin() {
}

void UUGCRegistry::RegisterAssetFromPackage(UUGCPackage* Package) {
}

int32 UUGCRegistry::NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus) {
    return 0;
}

bool UUGCRegistry::MountUGCPackage(UUGCPackage* Package, bool FromJoining) {
    return false;
}

bool UUGCRegistry::IsModToBeEnabled(int64 ModId) const {
    return false;
}

bool UUGCRegistry::IsModInstalledImprecise(const FString& ModName, bool IncludeDeprecatedLocation) const {
    return false;
}

bool UUGCRegistry::IsModInstalledByIdOrName(const FString& ModIdOrName, bool IncludeDeprecatedLocation) const {
    return false;
}

bool UUGCRegistry::IsModInstalled(const FString& ModId) const {
    return false;
}

bool UUGCRegistry::IsModEnabled(const FString& ModId) const {
    return false;
}

TArray<UUGCPackage*> UUGCRegistry::GetPackagesWhichDependsOnPackage(UUGCPackage* Package) {
    return TArray<UUGCPackage*>();
}

TArray<UUGCPackage*> UUGCRegistry::GetPackagesSorted(EPackageSortField ByField, bool Ascending) const {
    return TArray<UUGCPackage*>();
}

bool UUGCRegistry::GetMapsInPackage(UUGCPackage* Package, TArray<FName>& Maps) {
    return false;
}

bool UUGCRegistry::GetAllClassesInPackage(UUGCPackage* Package, TArray<UClass*>& Classes) {
    return false;
}

bool UUGCRegistry::AreModsInstalled(EUGCApprovalStatus ApprovalStatus) {
    return false;
}

bool UUGCRegistry::AreDeprecatedModsInstalled() {
    return false;
}

UUGCRegistry::UUGCRegistry() {
    this->PackageChange = false;
}

