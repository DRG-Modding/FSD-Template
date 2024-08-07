#include "SeasonsSubsystem.h"

USeasonsSubsystem::USeasonsSubsystem() {
    this->DesiredSeason = -1;
    this->ActiveSeason = -1;
    this->TrackedScripChallenge = NULL;
}

FTimespan USeasonsSubsystem::TimeToNewChallenge() {
    return FTimespan{};
}

void USeasonsSubsystem::SetSeasonCompletedAnnounced(bool IsAnnounced) const {
}

void USeasonsSubsystem::SetActiveSeason(USeason* Season) {
}

void USeasonsSubsystem::RerollChallenge(int32 Index) {
}

void USeasonsSubsystem::OnStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value) {
}

void USeasonsSubsystem::OnScripChallengeCompleted(UObject* WorldContext, UMissionStat* Stat, float Value) {
}

void USeasonsSubsystem::IsRewardClaimed(int32 Level, bool& IsNormalClaimed, bool& IsSpecialClaimed) {
}

bool USeasonsSubsystem::IsNodeUnlocked(int32 TreeOfVanityNodeID) {
    return false;
}

bool USeasonsSubsystem::IsNodeBought(int32 TreeOfVanityNodeID) {
    return false;
}

void USeasonsSubsystem::InitializeStatsAndChallenges() {
}

bool USeasonsSubsystem::HasUnclaimedRewards(int32& Level) {
    return false;
}

bool USeasonsSubsystem::HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels) {
    return false;
}

bool USeasonsSubsystem::HasClaimedAllRewards() const {
    return false;
}

int32 USeasonsSubsystem::GetUnusedHearts() {
    return 0;
}

UReward* USeasonsSubsystem::GetTreeOfVanityReward(UReward* currentReward) const {
    return NULL;
}

UGameDLC* USeasonsSubsystem::GetStoreSeasonDLC(UObject* WorldContext) const {
    return NULL;
}

int32 USeasonsSubsystem::GetSeasonXPFromMissionXP(AFSDPlayerState* PlayerState) {
    return 0;
}

int32 USeasonsSubsystem::GetSeasonXP() {
    return 0;
}

int32 USeasonsSubsystem::GetSeasonNumber() const {
    return 0;
}

FText USeasonsSubsystem::GetSeasonName() const {
    return FText::GetEmpty();
}

FSeasonMissionResult USeasonsSubsystem::GetSeasonMissionResult() {
    return FSeasonMissionResult{};
}

void USeasonsSubsystem::GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal) {
}

void USeasonsSubsystem::GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal) {
}

bool USeasonsSubsystem::GetSeasonExpiryDate(FDateTime& ExpiryDate) {
    return false;
}

bool USeasonsSubsystem::GetSeasonCompletedAnnounced() const {
    return false;
}

void USeasonsSubsystem::GetSeasonBought(bool& isBought) {
}

void USeasonsSubsystem::GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total) {
}

int32 USeasonsSubsystem::GetNumberOfTokens(UObject* WorldContextObject) {
    return 0;
}

int32 USeasonsSubsystem::GetNumberOfSeasonLevels() {
    return 0;
}

int32 USeasonsSubsystem::GetNumberOfClaimedPlagueHeartScrips() {
    return 0;
}

FSeasonLevel USeasonsSubsystem::GetNextReward() {
    return FSeasonLevel{};
}

int32 USeasonsSubsystem::GetLevelXP(int32 Level) {
    return 0;
}

FSeasonLevel USeasonsSubsystem::GetLevelReward(int32 Level) {
    return FSeasonLevel{};
}

void USeasonsSubsystem::GetLevelProgress(int32 Level, float& levelPercent) {
}

USeason* USeasonsSubsystem::GetCurrentSeason() const {
    return NULL;
}

TArray<UDataAsset*> USeasonsSubsystem::GetAssetReferences(int32 ChallengeIndex, USeasonChallenge*& outChallenge) {
    return TArray<UDataAsset*>();
}

TArray<FChallengeInfo> USeasonsSubsystem::GetActiveChallenges(bool canGenerateNewChallenge) {
    return TArray<FChallengeInfo>();
}

bool USeasonsSubsystem::ConvertHeartsToScrip(int32& scripGained) {
    return false;
}

void USeasonsSubsystem::CompleteSeasonEvent_Server(USeasonEventData* InEvent) {
}

bool USeasonsSubsystem::ClaimScripChallenge() {
    return false;
}

bool USeasonsSubsystem::ClaimReward(UObject* WorldContext, AFSDPlayerController* Player, int32 Level, bool isNormalReward) {
    return false;
}

void USeasonsSubsystem::CHEAT_SetSeasonMissionResult(int32 XPFromMission, int32 numberOfChallenges, USeasonEventData* Event) {
}

void USeasonsSubsystem::CHEAT_ResetTimeToNewChallenge() {
}

void USeasonsSubsystem::CHEAT_ResetReroll() {
}

void USeasonsSubsystem::CHEAT_AddChallenge() {
}

bool USeasonsSubsystem::CanRerollChallenge() {
    return false;
}

bool USeasonsSubsystem::BuyTreeNode(UObject* WorldContextObject, AFSDPlayerController* Player, int32 TreeOfVanityNodeID) {
    return false;
}


