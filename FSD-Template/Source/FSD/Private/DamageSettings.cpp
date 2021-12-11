#include "DamageSettings.h"

UDamageSettings::UDamageSettings() {
    this->TemperatureChangePerColdDamagePoint = -5.00f;
    this->TemperatureChangePerIceDamagePoint = -2.00f;
    this->TemperatureChangePerHeatDamagePoint = 5.00f;
    this->TemperatureChangePerFireDamagePoint = 2.00f;
    this->TemperatureShockActivationWindow = 10.00f;
    this->FrozenDamageBonus = 3.00f;
    this->EnemyOnFireStatusEffect = NULL;
    this->PlayerOnFireStatusEffect = NULL;
    this->TemperatureShockFromFrozenStatusEffect = NULL;
    this->TemperatureShockFromBurningStatusEffect = NULL;
    this->ArmorShatterDamage = NULL;
    this->ArmorShatterEmitter = NULL;
    this->ArmorShatterSound = NULL;
    this->ImpactDecals.AddDefaulted(3);
    this->DetonateFrozen = NULL;
    this->DetonateOnFire = NULL;
    this->DirectHit = NULL;
    this->MeltTarget = NULL;
    this->IgnoreBodypartDamageReduction = NULL;
}

