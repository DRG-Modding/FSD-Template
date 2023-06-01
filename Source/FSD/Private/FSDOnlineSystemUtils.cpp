#include "FSDOnlineSystemUtils.h"

void UFSDOnlineSystemUtils::TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason) {
}

void UFSDOnlineSystemUtils::ShowUpgradeAccountUI() {
}

void UFSDOnlineSystemUtils::ShowAccountPicker(UFSDGameInstance* gInstance, const int32 GamePlayerID) {
}

void UFSDOnlineSystemUtils::OpenURLInOverlay(const FString& URL, FOnShowWebUrlClosedBP OnOverlayClosed) {
}

void UFSDOnlineSystemUtils::OpenProfileWithEvent(APlayerState* Requestor, APlayerState* Requestee, FOnProfileUIClosedBP OnProfileWindowClosed) {
}

void UFSDOnlineSystemUtils::OpenProfileByUserId(APlayerState* Requestor, const FString& RequesteeUserID) {
}

void UFSDOnlineSystemUtils::OpenProfile(APlayerState* Requestor, APlayerState* Requestee) {
}

FText UFSDOnlineSystemUtils::OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason) {
    return FText::GetEmpty();
}

void UFSDOnlineSystemUtils::GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons) {
}

void UFSDOnlineSystemUtils::GetIsUpdatePending(const FOnGetIsUpdatePendingBP& Delegate) {
}

void UFSDOnlineSystemUtils::GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FOnGetUserPrivilegeCompleteBPDelegate& Delegate) {
}

FText UFSDOnlineSystemUtils::GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason reason) {
    return FText::GetEmpty();
}

EInviteBlockReason UFSDOnlineSystemUtils::CanPlayerInvite(UObject* WorldContextObject) {
    return EInviteBlockReason::SoloSession;
}

UFSDOnlineSystemUtils::UFSDOnlineSystemUtils() {
}

