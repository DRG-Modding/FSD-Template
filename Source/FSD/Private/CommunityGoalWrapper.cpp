#include "CommunityGoalWrapper.h"

class UCommunityGoal;
class UObject;
class UCommunityGoalFaction;

void UCommunityGoalWrapper::UpdateAllGoalsInitialized() {
}

bool UCommunityGoalWrapper::RewardReceived() const {
    return false;
}

void UCommunityGoalWrapper::RequestGoalStateData() {
}

void UCommunityGoalWrapper::RequestFactionsData() {
}

void UCommunityGoalWrapper::NextPeriod() {
}

void UCommunityGoalWrapper::InitializeGoalTierTargetValues(UCommunityGoal* goalToInitialize) {
}

UCommunityGoalFaction* UCommunityGoalWrapper::GetPlayerCurrentFaction(UObject* WorldContext) {
    return NULL;
}

void UCommunityGoalWrapper::ClaimRewardMessage(UObject* WorldContext, FCommunityRewardNotification rewardNotification) {
}

void UCommunityGoalWrapper::ClaimReward() {
}

void UCommunityGoalWrapper::CheckUI() {
}

UCommunityGoalWrapper::UCommunityGoalWrapper() {
    this->HasCGS = false;
    this->LastCollectedRewardID = 0;
    this->FreeBeerRewardActive = false;
    this->AreAllGoalsInitialized = false;
}

