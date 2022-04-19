#include "UGCRegistry.h"
#include "Templates/SubclassOf.h"

class UUGCPackage;
class AActor;

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

void UUGCRegistry::RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass) {
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

TSubclassOf<AActor> UUGCRegistry::GetOverrideForActorClass(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

bool UUGCRegistry::GetMapsInPackage(UUGCPackage* Package, TArray<FName>& Maps) {
    return false;
}

bool UUGCRegistry::GetAllClassesInPackage(UUGCPackage* Package, TArray<UClass*>& Classes) {
    return false;
}

bool UUGCRegistry::GetActorClassesWithReplacementActorComponentsInPackage(UUGCPackage* Package, TArray<TSubclassOf<AActor>>& ActorClasses) {
    return false;
}

void UUGCRegistry::ClearOverrideForClass(TSubclassOf<AActor> ActorClass) {
}

bool UUGCRegistry::AreModsInstalled(EUGCApprovalStatus ApprovalStatus) {
    return false;
}

bool UUGCRegistry::AreDeprecatedModsInstalled() {
    return false;
}

bool UUGCRegistry::ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass) {
    return false;
}

bool UUGCRegistry::ApplyAllOverridesInPackage(UUGCPackage* Package) {
    return false;
}

UUGCRegistry::UUGCRegistry() {
    this->PackageChange = false;
}

