#include "CommunityGoalSettings.h"

class UCommunityGoal;

UCommunityGoal* UCommunityGoalSettings::GetGoal(ECommunityGoalIndex Goal) const {
    return NULL;
}

UCommunityGoal* UCommunityGoalSettings::FindGoal(const FString& Goal) const {
    return NULL;
}

UCommunityGoalSettings::UCommunityGoalSettings() {
    this->DSMUGoal = NULL;
}

