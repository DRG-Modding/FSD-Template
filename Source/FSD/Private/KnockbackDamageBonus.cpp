#include "KnockbackDamageBonus.h"

UKnockbackDamageBonus::UKnockbackDamageBonus() {
    this->KnockBackHorizontalForce = 600.00f;
    this->KnockBackVerticalForce = 1000.00f;
    this->VerticalScaleMultiplier = 1.00f;
    this->HorizontalScaleMultiplier = 1.00f;
    this->MinVerticalPower = 0.00f;
    this->MinHorizontalPower = 0.00f;
    this->OptimalDistance = -1.00f;
    this->AllowForIncapacitadedPlayes = true;
    this->KnockThowardsInstigator = false;
    this->ScalePowerToInstigatorDistance = false;
    this->AbsoluteKnockBack = false;
}

