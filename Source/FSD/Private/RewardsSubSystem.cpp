#include "RewardsSubSystem.h"

bool URewardsSubSystem::ShouldPendingRewardsBeShown() const {
    return false;
}

bool URewardsSubSystem::ShouldPendingRewardsBeGiven() const {
    return false;
}

bool URewardsSubSystem::Receive_GetPendingRewards(UObject* WorldContext, FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const {
    return false;
}

bool URewardsSubSystem::HasPendingRewards() const {
    return false;
}

bool URewardsSubSystem::GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards) const {
    return false;
}

void URewardsSubSystem::ClearPendingRewards() {
}

void URewardsSubSystem::ApplyPendingRewards(AFSDPlayerController* Controller) {
}

URewardsSubSystem::URewardsSubSystem() {
}

