#include "CommunityGoal.h"

class UObject;

float UCommunityGoal::TotalTierProgress(float Value, int32 Members) {
    return 0.0f;
}

float UCommunityGoal::TierValue(ECommunityGoalTier Tier, float Value, int32 Members) {
    return 0.0f;
}

float UCommunityGoal::TierProgress(ECommunityGoalTier Tier, float Value, int32 Members) {
    return 0.0f;
}

float UCommunityGoal::TierGoal(ECommunityGoalTier Tier, int32 Members) {
    return 0.0f;
}

int32 UCommunityGoal::RewardTier(float Value, int32 Members) {
    return 0;
}

void UCommunityGoal::IncrementGoal(UObject* WorldContext, float Value) const {
}

FText UCommunityGoal::GoalToText(ECommunityGoalType StatType, float Value) {
    return FText::GetEmpty();
}

FText UCommunityGoal::GetCategoryTitle() const {
    return FText::GetEmpty();
}

bool UCommunityGoal::AreTiersInitialized() const {
    return false;
}

UCommunityGoal::UCommunityGoal() {
    this->TierValuesAreInitialized = false;
    this->Active = false;
    this->Category = NULL;
    this->CommunityGoalType = ECommunityGoalType::Float;
    this->GoalPerMemberTier1 = 0.00f;
    this->GoalPerMemberTier2 = 0.00f;
    this->GoalPerMemberTier3 = 0.00f;
    this->RewardSetup = NULL;
}

