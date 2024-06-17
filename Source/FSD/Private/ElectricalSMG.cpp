#include "ElectricalSMG.h"

AElectricalSMG::AElectricalSMG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SentryGunClass = NULL;
    this->AoEStatusEffect = NULL;
    this->AoEParticle = NULL;
    this->AoESound = NULL;
    this->AoEStatusEffectChance = 0.00f;
    this->AoEStatusEffectRange = 250.00f;
    this->TurretPlasmaLineEnabled = false;
    this->ElectrocutionChance = 0.00f;
    this->TurretEMPDischargeEnabled = false;
    this->ElectricfyPlatformsEnabled = false;
}

void AElectricalSMG::OnTerrainHit(const FVector& Location, const FRotator& Rotation, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AElectricalSMG::OnTargetDamaged(UHealthComponentBase* Health, float amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AElectricalSMG::OnStatusEffectPushed(UHealthComponentBase* Health) {
}

void AElectricalSMG::All_OnAoETriggered_Implementation(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const {
}


