#include "MilestoneAsset.h"

class UObject;
class UMilestoneAsset;
class UMissionStat;
class UTexture2D;

TArray<UMilestoneAsset*> UMilestoneAsset::SortMilestonesByProgress(UObject* WorldContext, TArray<UMilestoneAsset*>& Milestones) {
    return TArray<UMilestoneAsset*>();
}

void UMilestoneAsset::OnMissionStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value) {
}

bool UMilestoneAsset::IsCompleted(UObject* WorldContext) const {
    return false;
}

bool UMilestoneAsset::IsClaimable(UObject* WorldContext) {
    return false;
}

FText UMilestoneAsset::GetTitleForTier(int32 Tier) const {
    return FText::GetEmpty();
}

FText UMilestoneAsset::GetTitle(UObject* WorldContext) const {
    return FText::GetEmpty();
}

int32 UMilestoneAsset::GetNextPerkPointsReward(UObject* WorldContext) const {
    return 0;
}

void UMilestoneAsset::GetCurrentProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount) {
}

int32 UMilestoneAsset::GetClaimedTier(UObject* WorldContext) const {
    return 0;
}

bool UMilestoneAsset::GetClaimedProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount) {
    return false;
}

UTexture2D* UMilestoneAsset::GetCategoryIcon() const {
    return NULL;
}

void UMilestoneAsset::ClearPendingMilestoneReached() {
}

int32 UMilestoneAsset::ClaimNextTier(UObject* WorldContext) {
    return 0;
}

UMilestoneAsset::UMilestoneAsset() {
    this->LargeImage = NULL;
    this->FormattedValueOffset = 0;
    this->CountValueAsTotal = false;
    this->TrackingStat = NULL;
    this->TrackingCharacterID = NULL;
    this->LastTierReached = 0;
    this->bPendingMilestoneReached = false;
}

