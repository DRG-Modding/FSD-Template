#include "SeasonsSubsystem.h"

class UMissionStat;
class AFSDPlayerState;
class UObject;
class UDataAsset;
class UItemSkin;
class UVanityItem;
class USeasonChallenge;
class UPlayerCharacterID;
class UTextureRenderTarget2D;
class UPickaxePart;
class USeasonEventData;
class AFSDPlayerController;

FTimespan USeasonsSubsystem::TimeToNewChallenge() {
    return FTimespan{};
}

void USeasonsSubsystem::RerollChallenge(int32 Index) {
}

void USeasonsSubsystem::OnStatChanged(UMissionStat* Stat, float Value) {
}

void USeasonsSubsystem::OnScripChallengeCompleted(UMissionStat* Stat, float Value) {
}

void USeasonsSubsystem::IsRewardClaimed(int32 Level, bool& isNormalClaimed, bool& isSpecialClaimed) {
}

bool USeasonsSubsystem::IsNodeUnlocked(int32 TreeOfVanityNodeID) {
    return false;
}

bool USeasonsSubsystem::IsNodeBought(int32 TreeOfVanityNodeID) {
    return false;
}

void USeasonsSubsystem::InitliazeStats() {
}

bool USeasonsSubsystem::HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels) {
    return false;
}

bool USeasonsSubsystem::HasClaimedAllRewards() {
    return false;
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

void USeasonsSubsystem::GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal) {
}

void USeasonsSubsystem::GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal) {
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

FSeasonLevel USeasonsSubsystem::GetNextReward() {
    return FSeasonLevel{};
}

int32 USeasonsSubsystem::GetLevelXP(int32 Level) {
    return 0;
}

FSeasonLevel USeasonsSubsystem::GetLevelReward(int32 Level) {
    return FSeasonLevel{};
}

void USeasonsSubsystem::GetLevelProgress(int32 Level, float& levelPercent, int32& levelXP, int32& levelXPTotal) {
}

TArray<UDataAsset*> USeasonsSubsystem::GetAssetReferences(int32 challengeIndex, USeasonChallenge*& outChallenge) {
    return TArray<UDataAsset*>();
}

TArray<FChallengeInfo> USeasonsSubsystem::GetActiveChallenges(bool canGenerateNewChallenge) {
    return TArray<FChallengeInfo>();
}

UTextureRenderTarget2D* USeasonsSubsystem::GenerateVanityRewardIcon(UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size) {
    return NULL;
}

UTextureRenderTarget2D* USeasonsSubsystem::GenerateSkinRewardIcon(UItemSkin* Skin, UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size) {
    return NULL;
}

UTextureRenderTarget2D* USeasonsSubsystem::GeneratePickaxeRewardIcon(UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size) {
    return NULL;
}

void USeasonsSubsystem::CompleteSeasonEvent_Server(USeasonEventData* inEvent) {
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

USeasonsSubsystem::USeasonsSubsystem() {
    this->ForceSeasonEventIndex = -999;
}

