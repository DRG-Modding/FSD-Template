#include "ElectricalSMG.h"

AElectricalSMG::AElectricalSMG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SentryGunClass = NULL;
    this->AoEStatusEffect = NULL;
    this->AoEParticle = NULL;
    this->AoESound = NULL;
    this->AoEStatusEffectChance = 0.00f;
    this->AoEStatusEffectRange = 250.00f;
    this->TurretPlasmaLineEnabled = false;
    this->TurretEMPDischargeEnabled = false;
}

void AElectricalSMG::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AElectricalSMG::OnStatusEffectPushed(UHealthComponentBase* Health) {
}

void AElectricalSMG::All_OnAoETriggered_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const {
}


