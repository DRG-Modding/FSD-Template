#include "SeasonLevelWidget.h"

bool USeasonLevelWidget::TryClaimReward(bool isNormalReward) {
    return false;
}

void USeasonLevelWidget::SetData(int32 inLevel, bool inLastInRow) {
}



USeasonLevelWidget::USeasonLevelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Level = 0;
    this->SeasonLevel = 0;
    this->IsNormalClaimed = false;
    this->IsSpecialClaimed = false;
    this->IsUnlocked = false;
    this->IsLastInRow = false;
}

