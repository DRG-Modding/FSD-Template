#include "FSDPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "PlayerRejoinState.h"
#include "PlayerStatsComponent.h"
#include "SaveGameStateComponent.h"

class UPlayerResourceComponent;
class UPlayerCharacterID;
class APlayerCharacter;
class AFSDPlayerController;

void AFSDPlayerState::SetSelectedCharacterID(UPlayerCharacterID* characterID) {
}

void AFSDPlayerState::SetSelectedCharacter(TSubclassOf<APlayerCharacter> NewCharacter) {
}

void AFSDPlayerState::SetHasGeneratedLevel(bool hasgenerated) {
}

void AFSDPlayerState::SetCanOnlySpectate(bool canOnlySpectate) {
}

void AFSDPlayerState::ServerSetSelectedCharacter_Implementation(TSubclassOf<APlayerCharacter> NewCharacter) {
}

void AFSDPlayerState::Server_SetSupplyStatus_Implementation(uint8 StatusHealth, uint8 StatusAmmo) {
}

void AFSDPlayerState::Server_SetGameOwnerStatus_Implementation(int32 NewGameOwnerStatus) {
}

void AFSDPlayerState::OnRep_SupplyHealthStatus() {
}

void AFSDPlayerState::OnRep_SupplyAmmoStatus() {
}

void AFSDPlayerState::OnRep_SelectedCharacter() {
}

void AFSDPlayerState::OnRep_PlayerCharacter() {
}

void AFSDPlayerState::OnRep_LevelGenerationState() {
}

void AFSDPlayerState::OnRep_GameOwnerStatus() {
}

void AFSDPlayerState::OnRep_FractionLevelGenerated() {
}


bool AFSDPlayerState::HasNormalOwnerStatus() const {
    return false;
}

int32 AFSDPlayerState::GetXPRewardsSum() {
    return 0;
}

TArray<FXPReward> AFSDPlayerState::GetXPRewards() {
    return TArray<FXPReward>();
}

TArray<FXPReward> AFSDPlayerState::GetXPRewardDeepDive(int32 StagesCompleted) {
    return TArray<FXPReward>();
}

int32 AFSDPlayerState::GetUIPing() {
    return 0;
}

float AFSDPlayerState::GetSupplyHealthStatus() const {
    return 0.0f;
}

float AFSDPlayerState::GetSupplyAmmoStatus() const {
    return 0.0f;
}

int32 AFSDPlayerState::GetSelectedCharacterLevel() const {
    return 0;
}

UPlayerCharacterID* AFSDPlayerState::GetSelectedCharacterID() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> AFSDPlayerState::GetSelectedCharacter() const {
    return NULL;
}

FCharacterProgress AFSDPlayerState::GetSelectCharacterProgress() {
    return FCharacterProgress{};
}

UPlayerResourceComponent* AFSDPlayerState::GetPlayerResourceComponent() const {
    return NULL;
}

int32 AFSDPlayerState::GetPlayerRank() const {
    return 0;
}

AFSDPlayerController* AFSDPlayerState::GetPlayerController() const {
    return NULL;
}

bool AFSDPlayerState::GetHasGeneratedLevel() const {
    return false;
}

bool AFSDPlayerState::GetGameOwnerStatus(EGameOwnerStatus Status) const {
    return false;
}


EChatSenderType AFSDPlayerState::GetChatSenderType() const {
    return EChatSenderType::NormalUser;
}

FCharacterProgress AFSDPlayerState::GetCharacterProgress(UPlayerCharacterID* characterID) const {
    return FCharacterProgress{};
}

int32 AFSDPlayerState::GetCharacterLevel(UPlayerCharacterID* characterID) const {
    return 0;
}


void AFSDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDPlayerState, FractionLevelGenerated);
    DOREPLIFETIME(AFSDPlayerState, LevelGenerationState);
    DOREPLIFETIME(AFSDPlayerState, LatestEquipedVanity);
    DOREPLIFETIME(AFSDPlayerState, SelectedCharacter);
    DOREPLIFETIME(AFSDPlayerState, bIsServer);
    DOREPLIFETIME(AFSDPlayerState, gameOwnerStatus);
    DOREPLIFETIME(AFSDPlayerState, PlayerCharacter);
    DOREPLIFETIME(AFSDPlayerState, HasSelectedCharacter);
    DOREPLIFETIME(AFSDPlayerState, PlayerSortId);
    DOREPLIFETIME(AFSDPlayerState, SupplyAmmoStatus);
    DOREPLIFETIME(AFSDPlayerState, SupplyHealthStatus);
}

AFSDPlayerState::AFSDPlayerState() {
    this->FractionLevelGenerated = 0.00f;
    this->SelectedCharacter = NULL;
    this->bIsServer = false;
    this->ShouldCopyProperties = false;
    this->gameOwnerStatus = 0;
    this->IsOnSpaceRig = false;
    this->PlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("PlayerStatsComponent"));
    this->RejoinState = CreateDefaultSubobject<UPlayerRejoinState>(TEXT("RejoinState"));
    this->SaveGameStateComponent = CreateDefaultSubobject<USaveGameStateComponent>(TEXT("SaveGameStateComponent"));
    this->PlayerCharacter = NULL;
    this->IsInMission = false;
    this->IsTalking = false;
    this->HasGeneratedLevel = false;
    this->HasSelectedCharacter = false;
    this->PlayerSortId = 0;
    this->PlayerResources = NULL;
    this->SupplyAmmoStatus = 0;
    this->SupplyHealthStatus = 0;
}

