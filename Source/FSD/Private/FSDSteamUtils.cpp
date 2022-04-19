#include "FSDSteamUtils.h"

class APlayerState;

bool UFSDSteamUtils::PlayerIsFollowingUsOnSteam() {
    return false;
}

void UFSDSteamUtils::OpenURLInSteamBrowser(const FString& URL) {
}

bool UFSDSteamUtils::IsTextFilteringInitialized() {
    return false;
}

bool UFSDSteamUtils::IsSteamLoaded() {
    return false;
}

bool UFSDSteamUtils::IsDev(APlayerState* PlayerState) {
    return false;
}

bool UFSDSteamUtils::InitializeFilterText() {
    return false;
}

bool UFSDSteamUtils::HasSupporterUpgrade() {
    return false;
}

bool UFSDSteamUtils::HasDeluxeEdition() {
    return false;
}

bool UFSDSteamUtils::HasContentCreatorEdition() {
    return false;
}

FString UFSDSteamUtils::GetSteamRegion() {
    return TEXT("");
}

FString UFSDSteamUtils::GetSteamLanguage() {
    return TEXT("");
}

FString UFSDSteamUtils::GetSteamBranchString() {
    return TEXT("");
}

ESteamBranch UFSDSteamUtils::GetSteamBranch() {
    return ESteamBranch::Main;
}

FString UFSDSteamUtils::GetPlayerSteamName() {
    return TEXT("");
}

FString UFSDSteamUtils::GetPlayerSteamID() {
    return TEXT("");
}

FString UFSDSteamUtils::FilterProfanityText(const FString& inputMessage) {
    return TEXT("");
}

UFSDSteamUtils::UFSDSteamUtils() {
}

