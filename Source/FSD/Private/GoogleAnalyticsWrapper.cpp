#include "GoogleAnalyticsWrapper.h"

class AFSDGameState;
class APlayerController;
class USeasonChallenge;
class AActor;
class AFSDPlayerState;

void UGoogleAnalyticsWrapper::StartMissionPartyInfo(AFSDGameState* GameState) {
}

void UGoogleAnalyticsWrapper::SetShouldUpdateSchematicInformation() {
}

void UGoogleAnalyticsWrapper::ResetBoscoLoadout() {
}

void UGoogleAnalyticsWrapper::RecordTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 Time) {
}

void UGoogleAnalyticsWrapper::RecordOpenScreen(const FString& Key, bool Rank) {
}

void UGoogleAnalyticsWrapper::RecordMachineEventEnd(const FString& EventName, bool WasCompleted, float completionTime) {
}

void UGoogleAnalyticsWrapper::RecordKickPlayer(const FString& reason, APlayerController* KickedPlayer) {
}

void UGoogleAnalyticsWrapper::RecordGAUserTiming(const FString& TimingCategory, const int32 TimingValue, const FString& TimingName) {
}

void UGoogleAnalyticsWrapper::RecordGaTreeOfVanityClaim(int32 NodeID) {
}

void UGoogleAnalyticsWrapper::RecordGASeasonLevelUp() {
}

void UGoogleAnalyticsWrapper::RecordGAMissionTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 totalTime, int32 Progress, int32 XP, int32 Credits) {
}

void UGoogleAnalyticsWrapper::RecordGAMissionTimeEvent(int32 Time) {
}

void UGoogleAnalyticsWrapper::RecordGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, EFSDGoogleAnalyticsProperties Property) {
}

void UGoogleAnalyticsWrapper::RecordGADeepDiveStageHit(const FString& Key, bool Rank, int32 stageTime, int32 timeSinceStartOfDive, int32 totalTime, int32 nitraLeft) {
}

void UGoogleAnalyticsWrapper::RecordGaChallengeReroll(int32 challengeIndex, USeasonChallenge* challenge) {
}

void UGoogleAnalyticsWrapper::RecordExtraFailInfo(const FString& MissionName, const FString& Stage, const FString& ExtraText) {
}

void UGoogleAnalyticsWrapper::RecordCustomGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, const FString& TrackingId) {
}

void UGoogleAnalyticsWrapper::RecordContinuousDamage(AActor* DamageCauser) {
}

void UGoogleAnalyticsWrapper::RecordBossFightEnd(const FString& BossName, bool WasBossKilled, int32 BossKills) {
}

FString UGoogleAnalyticsWrapper::ProcessCampaignName(UClass* Campaign) {
    return TEXT("");
}

void UGoogleAnalyticsWrapper::PlayerLatejoin() {
}

void UGoogleAnalyticsWrapper::PlayerDropout() {
}

void UGoogleAnalyticsWrapper::OnPlayerLeaveBind(AFSDPlayerState* PlayerState) {
}

void UGoogleAnalyticsWrapper::OnPlayerJoinBind(AFSDPlayerState* PlayerState) {
}

void UGoogleAnalyticsWrapper::HandleMatchStarted() {
}

FString UGoogleAnalyticsWrapper::GetAnalyticsFText(FText Text) {
    return TEXT("");
}

void UGoogleAnalyticsWrapper::EndMissionPartyInfo() {
}

UGoogleAnalyticsWrapper::UGoogleAnalyticsWrapper() {
    this->LastUnlockedWeapons = TEXT("None");
    this->LastKnownClass = TEXT("None");
    this->BoscoLoadOut = TEXT("Bosco=;");
    this->WasCampaign = false;
    this->LastCampaignProgress = 0;
    this->WasLastCampaignMission = false;
    this->LastCampaignSize = 0;
    this->DiscordCommunityTrackingID = TEXT("UA-85959451-10");
    this->CommunityGoalsTrackingID = TEXT("UA-85959451-12");
    this->ShouldUpdateSchematicTrackingInformation = true;
}

