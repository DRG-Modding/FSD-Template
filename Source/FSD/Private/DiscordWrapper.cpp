#include "DiscordWrapper.h"

void UDiscordWrapper::RequestUserInServer() {
}

void UDiscordWrapper::RequestFactionAdjustment(int32 Faction, bool force) {
}

void UDiscordWrapper::RequestEoMData() {
}

void UDiscordWrapper::RequestDiscordServerInfo() {
}

void UDiscordWrapper::RejectInviteSignature() {
}

void UDiscordWrapper::IgnoreInviteSignature() {
}

FString UDiscordWrapper::GetAvatarURL() {
    return TEXT("");
}

void UDiscordWrapper::AdjustFaction() {
}

void UDiscordWrapper::AcceptInviteSignature() {
}

UDiscordWrapper::UDiscordWrapper() {
    this->LastResponseSuccessful = false;
    this->UserIn = false;
    this->UserInStatus = 0;
    this->HasEoM = false;
    this->IsConnected = true;
    this->ServerInfoLoaded = false;
}

