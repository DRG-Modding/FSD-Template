#include "FSDGameState.h"
#include "Net/UnrealNetwork.h"
#include "DifficultyManager.h"
#include "ShowroomManager.h"
#include "TeamResourcesComponent.h"
#include "SpawnEffectsComponent.h"
#include "DynamicMeshScaler.h"
#include "FlareController.h"
#include "GemProximityTracker.h"
#include "AttackerManagerComponent.h"
#include "SoundMixManagerComponent.h"
#include "SeasonReplicatorComponent.h"
#include "PlayerProximityTracker.h"

class UGeneratedMission;
class AFSDPlayerState;
class UResourceData;
class UDifficultySetting;
class UFSDEvent;
class UObjective;
class AProceduralSetup;
class AGameStats;
class USoundCue;

void AFSDGameState::StartCountdown(int32 Duration, const FText& countdownName) {
}

void AFSDGameState::SetPreventLatejoinCharacterDuplication(bool prevent) {
}

void AFSDGameState::SetPlayersHaveReachedDroppod(bool newHasPlayerReached) {
}

void AFSDGameState::SetGeneratedMissionParameters(UGeneratedMission* mission) {
}

void AFSDGameState::SetCurrentDifficulty(UDifficultySetting* Setting, bool updateSessionSettings) {
}

void AFSDGameState::SetCompletionData(bool NewObjectivesCompleted, int32 playersInPod) {
}


void AFSDGameState::PostLocalizedGameMessage(const FText& Msg, const TArray<FText>& Arguments) {
}

void AFSDGameState::PostGameMessage(const FString& Msg) {
}

void AFSDGameState::OnRep_StartPressed(bool oldStartPressed) {
}

void AFSDGameState::OnRep_ObjectivesCompleted() {
}

void AFSDGameState::OnRep_MissionTime() {
}

void AFSDGameState::OnRep_GeneratedMissionSeed() {
}

void AFSDGameState::OnRep_FSDSessionID() {
}

void AFSDGameState::OnRep_CurrentDifficultySetting() {
}

void AFSDGameState::OnRep_CountdownText() {
}

void AFSDGameState::OnRep_CountdownRemaining(int32 prevTime) {
}

void AFSDGameState::OnRep_ContinuePressed() {
}

void AFSDGameState::OnRep_ContinueCountdown() {
}

void AFSDGameState::OnRep_CompletedGameEvent() {
}

void AFSDGameState::OnRep_BoscoReviveCounter() {
}

void AFSDGameState::OnRep_AllDwarvesDown() {
}

int32 AFSDGameState::MissionEndscreenSeed() {
    return 0;
}

bool AFSDGameState::IsTutorialMission() const {
    return false;
}

bool AFSDGameState::IsCountingDown() const {
    return false;
}

void AFSDGameState::InitObjectives() {
}

void AFSDGameState::HostDisbandedTeam_Implementation() {
}

bool AFSDGameState::HasObjectivesReplicated() const {
    return false;
}


AFSDPlayerState* AFSDGameState::GetServerPlayerState() {
    return NULL;
}

UObjective* AFSDGameState::GetSecondaryObjective() const {
    return NULL;
}

AProceduralSetup* AFSDGameState::GetProceduralSetup() {
    return NULL;
}

UObjective* AFSDGameState::GetPrimaryObjective() const {
    return NULL;
}

bool AFSDGameState::GetPreventLatejoinCharacterDuplication() const {
    return false;
}

bool AFSDGameState::GetPlayersHaveReachedDroppod() const {
    return false;
}


TArray<UObjective*> AFSDGameState::GetObjectives() const {
    return TArray<UObjective*>();
}

TArray<AFSDPlayerState*> AFSDGameState::GetNetworkSortedPlayerArray() {
    return TArray<AFSDPlayerState*>();
}

int32 AFSDGameState::GetMissionTime() const {
    return 0;
}

bool AFSDGameState::GetMissionSuccessful() const {
    return false;
}

int32 AFSDGameState::GetMissionStartTime() const {
    return 0;
}

int32 AFSDGameState::GetMissionRewardCreditSum() const {
    return 0;
}

TArray<FCreditsReward> AFSDGameState::GetMissionRewardCredits() const {
    return TArray<FCreditsReward>();
}

bool AFSDGameState::GetMissionCompletedCreditReward(bool primary, int32& OutReward) const {
    return false;
}

int32 AFSDGameState::GetGlobalMissionSeed() const {
    return 0;
}

AGameStats* AFSDGameState::GetGameStats() const {
    return NULL;
}

TMap<UResourceData*, float> AFSDGameState::GetEndscreenResources() const {
    return TMap<UResourceData*, float>();
}

UDifficultyManager* AFSDGameState::GetDifficultyManager() const {
    return NULL;
}

TMap<UResourceData*, float> AFSDGameState::GetCollectedResources() const {
    return TMap<UResourceData*, float>();
}

TArray<UFSDEvent*> AFSDGameState::GetActiveEventsFromMission() const {
    return TArray<UFSDEvent*>();
}

void AFSDGameState::ClientNewMessage_Implementation(const FFSDChatMessage& Msg) {
}

void AFSDGameState::Client_StartPressed() {
}

void AFSDGameState::Client_NewLocalizedMessage_Implementation(const FFSDLocalizedChatMessage& Msg) {
}

bool AFSDGameState::AllMissionEndResultsReceived() const {
    return false;
}

void AFSDGameState::All_SpawnScaledEffectAt_Implementation(FScaledEffect effect, FVector_NetQuantize Location) {
}

void AFSDGameState::All_SpawnScaledEffectAndCueAt_Implementation(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location) {
}

void AFSDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDGameState, CurrentLevel);
    DOREPLIFETIME(AFSDGameState, EscapePod);
    DOREPLIFETIME(AFSDGameState, FSDSessionID);
    DOREPLIFETIME(AFSDGameState, BoscoReviveCounter);
    DOREPLIFETIME(AFSDGameState, ActivePlayerCharacters);
    DOREPLIFETIME(AFSDGameState, Objectives);
    DOREPLIFETIME(AFSDGameState, CompletedGameEventName);
    DOREPLIFETIME(AFSDGameState, GeneratedMissionSeed);
    DOREPLIFETIME(AFSDGameState, objectivesCompleted);
    DOREPLIFETIME(AFSDGameState, CurrentDifficultySetting);
    DOREPLIFETIME(AFSDGameState, MissionTime);
    DOREPLIFETIME(AFSDGameState, PreventLatejoinCharacterDuplication);
    DOREPLIFETIME(AFSDGameState, StartPressed);
    DOREPLIFETIME(AFSDGameState, ContinuePressed);
    DOREPLIFETIME(AFSDGameState, ContinuesCountdown);
    DOREPLIFETIME(AFSDGameState, AllDwarvesDown);
    DOREPLIFETIME(AFSDGameState, MissionAborted);
    DOREPLIFETIME(AFSDGameState, CountdownRemaining);
    DOREPLIFETIME(AFSDGameState, countdownText);
}

AFSDGameState::AFSDGameState() {
    this->CurrentLevel = -1;
    this->EscapePod = NULL;
    this->bTeamDown = false;
    this->CSGWorld = NULL;
    this->LastSupplyPodTimeStamp = 0;
    this->ProceduralSetup = NULL;
    this->DelayLateJoin = false;
    this->FakeMovementBase = NULL;
    this->PlayerSurvivalCreditBonus = 100;
    this->ResourceAmountPenalty = 0.25f;
    this->ObjectivesCreditPenalty = 0.25f;
    this->ObjectivesXPPenaltyNormal = 0.25f;
    this->ObjectivesXPPenaltyDeepDives = 0.20f;
    this->BoscoReviveCounter = -1;
    this->SpawnEffects = CreateDefaultSubobject<USpawnEffectsComponent>(TEXT("SpawnEffects"));
    this->MeshScaler = CreateDefaultSubobject<UDynamicMeshScaler>(TEXT("MeshScaler"));
    this->FlareController = CreateDefaultSubobject<UFlareController>(TEXT("FlareController"));
    this->GemProximityTracker = CreateDefaultSubobject<UGemProximityTracker>(TEXT("GemProximityTracker"));
    this->AttackerManager = CreateDefaultSubobject<UAttackerManagerComponent>(TEXT("AttackerManager"));
    this->DifficultyManagerComponent = CreateDefaultSubobject<UDifficultyManager>(TEXT("DifficultyManager"));
    this->SoundMixManager = CreateDefaultSubobject<USoundMixManagerComponent>(TEXT("SoundMixManager"));
    this->SeasonReplicatorComponent = CreateDefaultSubobject<USeasonReplicatorComponent>(TEXT("SeasonReplicator"));
    this->TeamResources = CreateDefaultSubobject<UTeamResourcesComponent>(TEXT("TeamResources"));
    this->IsOnSpaceRig = false;
    this->PlayerMadeItToDropPod = true;
    this->objectivesCompleted = false;
    this->CurrentDifficultySetting = NULL;
    this->RememberDifficulty = true;
    this->ProximityTracker = CreateDefaultSubobject<UPlayerProximityTracker>(TEXT("ProximityTracker"));
    this->ShowroomManager = CreateDefaultSubobject<UShowroomManager>(TEXT("ShowroomManager"));
    this->GameStats = NULL;
    this->MissionTime = 0;
    this->MissionStartTime = 0;
    this->MissionHaz = 0;
    this->PreventLatejoinCharacterDuplication = true;
    this->StartPressed = false;
    this->ContinuePressed = false;
    this->ContinuesCountdown = 0;
    this->AllDwarvesDown = false;
    this->MissionAborted = false;
    this->CountdownRemaining = -1;
    this->CanCarryOverResources = true;
    this->CurrentPlayerSessionLeader = NULL;
}

