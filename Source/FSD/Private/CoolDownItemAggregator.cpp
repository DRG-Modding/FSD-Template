#include "CoolDownItemAggregator.h"

void UCoolDownItemAggregator::SetPaused(bool IsPaused) {
}

bool UCoolDownItemAggregator::IsCoolingDown() const {
    return false;
}

float UCoolDownItemAggregator::GetCoolDownProgress() const {
    return 0.0f;
}

void UCoolDownItemAggregator::ActivateCoolDown(bool startPaused) {
}

UCoolDownItemAggregator::UCoolDownItemAggregator() {
    this->CooldownDuration = 2.00f;
    this->AudioCoolDownFinished = NULL;
    this->CooldownRemaining = 0.00f;
    this->CoolDownIsPaused = false;
    this->Item = NULL;
}

