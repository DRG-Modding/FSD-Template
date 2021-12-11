#include "UpgradeValues.h"

FUpgradeValues::FUpgradeValues() {
    this->BaseValue = 0.00f;
    this->UpgradedValue = 0.00f;
    this->UpgradedPercentageValue = 0.00f;
    this->OldUpgradedValue = 0.00f;
    this->OldUpgradedPercentageValue = 0.00f;
    this->CurrentValue = 0.00f;
    this->CalculationType = EUpgradeCalucationType::Additive;
    this->PreviewStatus = EItemPreviewStatus::Normal;
}

