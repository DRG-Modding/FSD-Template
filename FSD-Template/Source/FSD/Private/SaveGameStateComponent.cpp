#include "SaveGameStateComponent.h"
#include "Net/UnrealNetwork.h"

class UVictoryPose;
class UPlayerCharacterID;
class UGeneratedMission;

void USaveGameStateComponent::SetCampaign() {
}

void USaveGameStateComponent::Server_SetVictoryPose_Implementation(UVictoryPose* pose) {
}
bool USaveGameStateComponent::Server_SetVictoryPose_Validate(UVictoryPose* pose) {
    return true;
}

void USaveGameStateComponent::Server_SetPlayerProgress_Implementation(const FPlayerProgress& Progress) {
}
bool USaveGameStateComponent::Server_SetPlayerProgress_Validate(const FPlayerProgress& Progress) {
    return true;
}

void USaveGameStateComponent::Server_SetLoadout_Implementation(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts) {
}
bool USaveGameStateComponent::Server_SetLoadout_Validate(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts) {
    return true;
}

void USaveGameStateComponent::Server_SetEquippedPerks_Implementation(const TArray<FSaveGameStatePerkItem>& perks) {
}
bool USaveGameStateComponent::Server_SetEquippedPerks_Validate(const TArray<FSaveGameStatePerkItem>& perks) {
    return true;
}

void USaveGameStateComponent::Server_SetCredits_Implementation(const int32 Amount) {
}
bool USaveGameStateComponent::Server_SetCredits_Validate(const int32 Amount) {
    return true;
}

void USaveGameStateComponent::Server_SetCharacterStats_Implementation(const TArray<FCharacterProgress>& Stats) {
}
bool USaveGameStateComponent::Server_SetCharacterStats_Validate(const TArray<FCharacterProgress>& Stats) {
    return true;
}

void USaveGameStateComponent::Server_SetActiveCampaignMission_Implementation(FActiveCampaingMission Data) {
}
bool USaveGameStateComponent::Server_SetActiveCampaignMission_Validate(FActiveCampaingMission Data) {
    return true;
}

void USaveGameStateComponent::RefreshLoadoutFromSave(UPlayerCharacterID* characterID) {
}

void USaveGameStateComponent::OnRep_PlayerProgress() {
}

void USaveGameStateComponent::OnRep_ItemUpgradeSelections() {
}

void USaveGameStateComponent::OnRep_Credits() {
}

void USaveGameStateComponent::OnRep_CharacterStats() {
}

void USaveGameStateComponent::OnRep_ActiveCampaignMission() {
}

FCharacterProgress USaveGameStateComponent::GetCharacterStat(UPlayerCharacterID* characterID) {
    return FCharacterProgress{};
}

UGeneratedMission* USaveGameStateComponent::GetActiveCampaignMission() const {
    return NULL;
}

void USaveGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USaveGameStateComponent, Credits);
    DOREPLIFETIME(USaveGameStateComponent, VictoryPose);
    DOREPLIFETIME(USaveGameStateComponent, ActiveCampaignMission);
    DOREPLIFETIME(USaveGameStateComponent, ItemUpgradeSelections);
    DOREPLIFETIME(USaveGameStateComponent, PlayerProgress);
    DOREPLIFETIME(USaveGameStateComponent, CharacterStats);
}

USaveGameStateComponent::USaveGameStateComponent() {
    this->Credits = 0;
    this->VictoryPose = NULL;
}

