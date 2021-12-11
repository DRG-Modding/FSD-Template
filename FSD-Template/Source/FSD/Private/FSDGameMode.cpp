#include "FSDGameMode.h"
#include "Templates/SubclassOf.h"

class AMiningPod;
class AFSDPlayerController;
class AActor;
class AFSDGameMode;
class UEnemyWaveManager;
class AMolly;
class UEncounterManager;
class ABosco;
class UDifficultyManager;
class APlayerController;
class APlayerCharacter;

void AFSDGameMode::StartGame() {
}


void AFSDGameMode::SignalEndLevelToClients() {
}

void AFSDGameMode::ResetDeaths() {
}







void AFSDGameMode::OnControllerDestroyed(AActor* Controller) {
}


void AFSDGameMode::LoadMission(const FString& MapName, TSoftClassPtr<AFSDGameMode> optionalGameMode) {
}

void AFSDGameMode::HostAbortMission() {
}

UEnemyWaveManager* AFSDGameMode::GetWaveManager() const {
    return NULL;
}

AActor* AFSDGameMode::GetPlayerStart(AFSDPlayerController* Controller) {
    return NULL;
}

TSubclassOf<AMolly> AFSDGameMode::GetMuleClass() const {
    return NULL;
}

UEncounterManager* AFSDGameMode::GetEncounterManager() const {
    return NULL;
}

FSoftObjectPath AFSDGameMode::GetDropPodPath() const {
    return FSoftObjectPath{};
}

FSoftObjectPath AFSDGameMode::GetDropPodEscapePath() const {
    return FSoftObjectPath{};
}

TSubclassOf<AMiningPod> AFSDGameMode::GetDropPodEscapeClass() const {
    return NULL;
}

TSubclassOf<AMiningPod> AFSDGameMode::GetDropPodClass() const {
    return NULL;
}

FSoftObjectPath AFSDGameMode::GetDronePath() const {
    return FSoftObjectPath{};
}

TSubclassOf<ABosco> AFSDGameMode::GetDroneClass() const {
    return NULL;
}

UDifficultyManager* AFSDGameMode::GetDifficultyManager() const {
    return NULL;
}

int32 AFSDGameMode::GetCurrentLevel() const {
    return 0;
}

bool AFSDGameMode::FSDSetPause(APlayerController* PC, EPauseReason pauseReason) {
    return false;
}

bool AFSDGameMode::FSDKickPlayer(APlayerController* KickedPlayer, const FText& KickReason) {
    return false;
}

bool AFSDGameMode::FSDClearPause(EPauseReason pauseReason) {
    return false;
}

void AFSDGameMode::EndLevel() {
}


void AFSDGameMode::DestroyNonLocalPlayers() {
}

void AFSDGameMode::Debug_ShowPlayerSpheres() {
}

bool AFSDGameMode::AllPlayersHaveSelectedCharacter() const {
    return false;
}

bool AFSDGameMode::AllPlayersHaveGeneratedLevel() const {
    return false;
}

void AFSDGameMode::AddControllerForGracePeriod(APlayerCharacter* APlayerCharacter) {
}

void AFSDGameMode::AboutMission() {
}

AFSDGameMode::AFSDGameMode() {
    this->GenerationStarted = false;
    this->EncounterManagerComponent = NULL;
    this->ContinueCountdown = 10.00f;
    this->PreventAllLatejoin = false;
    this->PreventLateJoinOnMissionStart = false;
    this->PlayerSpawnHeightOffset = 75.00f;
    this->FriendlyFireGracePeriod = 240.00f;
    this->UseNormalEncounters = true;
    this->UseStationaryEncounter = true;
    this->AllowSpecialEncounters = true;
    this->CachedWaveManager = NULL;
}

