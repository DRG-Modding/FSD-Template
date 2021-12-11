#include "PlasmaCarbine.h"

void APlasmaCarbine::ApplyShieldDamage_Implementation() {
}

APlasmaCarbine::APlasmaCarbine() {
    this->RateOfFireBoostOnFullShield = 1.00f;
    this->RemoveShieldOnOverheat = false;
    this->RemoveShieldOnReload = false;
    this->HeatEffectsThreshold = 50.00f;
    this->FP_CharacterOverheatEndMontage = NULL;
    this->TP_CharacterOverheatEndMontage = NULL;
    this->WPN_ItemOverheatEndMontage = NULL;
    this->FP_CharacterReloadEndMontage = NULL;
    this->TP_CharacterReloadEndMontage = NULL;
    this->WPN_ItemReloadEndMontage = NULL;
}

