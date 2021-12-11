#include "FlameThrowerItem.h"

class UHealthComponentBase;
class UFSDPhysicalMaterial;
class AActor;
class UPrimitiveComponent;

void AFlameThrowerItem::TriggerAoEHeat() {
}

void AFlameThrowerItem::ServerMeltIce_Implementation(const TArray<FVector>& meltPoints) {
}
bool AFlameThrowerItem::ServerMeltIce_Validate(const TArray<FVector>& meltPoints) {
    return true;
}

void AFlameThrowerItem::ServerDoDamage_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End) {
}
bool AFlameThrowerItem::ServerDoDamage_Validate(FVector_NetQuantize Start, FVector_NetQuantize End) {
    return true;
}

void AFlameThrowerItem::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat) {
}

void AFlameThrowerItem::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AFlameThrowerItem::All_ShowTargetBurstIntoFire_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}

void AFlameThrowerItem::All_FlameFeedback_Implementation(FVector_NetQuantize Location, FRotator Rotation) {
}

AFlameThrowerItem::AFlameThrowerItem() {
    this->FlameParticleComponent = NULL;
    this->ShotCostProjectile = 10;
    this->DecalDelay = 0.20f;
    this->CurrentDecalDelay = 0.00f;
    this->ImpactParticles = NULL;
    this->ImpactParticleInstance = NULL;
    this->FP_LongReachParticles = NULL;
    this->TP_LongReachParticles = NULL;
    this->VeryLongReachThreshold = 2000.00f;
    this->FP_VeryLongReachParticles = NULL;
    this->TP_VeryLongReachParticles = NULL;
    this->DamageSphereRadius = 25.00f;
    this->MaxFlameDistance = 5000.00f;
    this->FlameGrowthPerSecond = 1000.00f;
    this->FlameEndPointResponsiveness = 0.25f;
    this->FlameIntensityPerSecond = 1.00f;
    this->OnFireStatusEffect = NULL;
    this->ChanceToFleeOnDamage = 0.00f;
    this->MeltPointRadius = 40.00f;
    this->MeltPointBuildTime = 0.10f;
    this->MeltCarveTime = 1.00f;
    this->MeltSteamParticle = NULL;
    this->LongReachEnabled = false;
    this->AoEHeatEnabled = false;
    this->KilledTargetsExplosionChance = 0.00f;
    this->ShowDamageParticle = 1.00f;
    this->DamangeTargetsParticles = NULL;
    this->KilledTargetsExplodingParticles = NULL;
    this->KilledTargetsExplodingSound = NULL;
}

