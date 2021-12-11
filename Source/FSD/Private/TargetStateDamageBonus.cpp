#include "TargetStateDamageBonus.h"

UTargetStateDamageBonus::UTargetStateDamageBonus() {
    this->TargetState = ETargetStateDamageBonusType::Frozen;
    this->Bonus = 3.00f;
    this->DamageClass = NULL;
}

