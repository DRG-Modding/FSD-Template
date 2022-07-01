#include "FSDAchievement.h"

class UObject;
class UFSDAchievement;
class AFSDPlayerController;

void UFSDAchievement::SetAchievementProgressForEntireServer(float Progress, UObject* WorldContext) {
}

void UFSDAchievement::SetAchievementProgress(float Progress, const AFSDPlayerController* Player, UObject* WorldContext) {
}

void UFSDAchievement::ResetStatForAchievement(UFSDAchievement* AchievementToReset, const AFSDPlayerController* Player) {
}

float UFSDAchievement::GetAchievementTargetValue() {
    return 0.0f;
}

UFSDAchievement::UFSDAchievement() {
    this->AchievementTargetValue = 0.00f;
    this->AchievementType = EFSDAchievementType::NoStatUsed;
}

