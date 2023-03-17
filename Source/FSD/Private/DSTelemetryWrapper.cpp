#include "DSTelemetryWrapper.h"
#include "Templates/SubclassOf.h"

void UDSTelemetryWrapper::RecordTreeOfVanityClaim(int32 NodeID) {
}

void UDSTelemetryWrapper::RecordSpecialEventHappening(const FString& EventName, bool SuccessfullySpawned) {
}

void UDSTelemetryWrapper::RecordSeasonXpGained(int32 Gained, int32 LastLevel, bool Positive) {
}

void UDSTelemetryWrapper::RecordSeasonLevelUp() {
}

void UDSTelemetryWrapper::RecordSeasonChallengeReroll(int32 ChallengeIndex, USeasonChallenge* Challenge) {
}

void UDSTelemetryWrapper::RecordOpenScreen(const FString& ScreenName, bool RecordRank) {
}

void UDSTelemetryWrapper::RecordMissionStart() {
}

void UDSTelemetryWrapper::RecordMissionEnd(int32 XPReward, int32 CreditReward) {
}

void UDSTelemetryWrapper::RecordMachineEventEnd(const FString& EventName, bool WasCompleted, int32 completionTime) {
}

void UDSTelemetryWrapper::RecordKickPlayer(const FString& reason, APlayerController* KickedPlayer) {
}

void UDSTelemetryWrapper::RecordDeepDiveStageEnd(const FString& MissionName, int32 StageTime, int32 TimeSinceStartOfDive, int32 TotalTime, int32 NitraLeft) {
}

void UDSTelemetryWrapper::RecordContinuousDamage(AActor* DamageCauser) {
}

void UDSTelemetryWrapper::RecordCommunityEvents(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue) {
}

void UDSTelemetryWrapper::RecordBossFightEnd(const FString& BossName, bool WasBossKilled, int32 NumBossKills) {
}

void UDSTelemetryWrapper::OnNewProceduralSetup() {
}

void UDSTelemetryWrapper::OnNewPlayer(AFSDPlayerController* Controller) {
}

void UDSTelemetryWrapper::OnNewMission(UGeneratedMission* mission) {
}

void UDSTelemetryWrapper::OnNewCharacter() {
}

void UDSTelemetryWrapper::OnCharacterSaveChanged(TSubclassOf<APlayerCharacter> CharacterClass, int32 Level, float Progress) {
}

void UDSTelemetryWrapper::OnCharacterPromoted(TSubclassOf<APlayerCharacter> CharacterClass, int32 RetirementCount) {
}

UDSTelemetryWrapper::UDSTelemetryWrapper() {
    this->Telemetry = NULL;
}

