#include "UGCPackage.h"

FString UUGCPackage::GetIdAsString() {
    return TEXT("");
}

int64 UUGCPackage::GetIdAsInt() {
    return 0;
}

UUGCPackage::UUGCPackage() {
    this->Status = EUGCApprovalStatus::Sandbox;
    this->DownloadVersion = EUGCDownloadVersion::Optional;
    this->IsMounted = false;
    this->MountingToBeApplied = false;
    this->DeprecatedLocation = false;
    this->ShowStatusForAudioCosmetic = false;
    this->DependencyRemoved = false;
    this->PackagedForLatestVersion = false;
    this->OverridePackedForLatestVersion = false;
}

