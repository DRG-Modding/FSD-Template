#include "HealthRegenerationParams.h"

FHealthRegenerationParams::FHealthRegenerationParams() {
    this->bIsRegenerating = false;
    this->DelayAfterDamage = 0.00f;
    this->HealthPerSecond = 0.00f;
    this->TargetHealthRatio = 0.00f;
}

