#include "HeavyParticleCannon.h"
#include "Net/UnrealNetwork.h"
#include "FirstPersonNiagaraComponent.h"
#include "StickyFlameSpawner.h"
#include "ReflectionHitscanComponent.h"
#include "DamageComponent.h"
#include "NiagaraComponent.h"

class AActor;
class UFSDPhysicalMaterial;

void AHeavyParticleCannon::UpdateBeamsVisibility_Implementation(bool isBeamVisible) {
}

void AHeavyParticleCannon::UpdateBeam(const FReflectionTraceResult& Path) {
}

void AHeavyParticleCannon::ServerSetBoostActive_Implementation(bool newActive) {
}

void AHeavyParticleCannon::Server_SetBeamActive_Implementation(bool inIsBeamActive) {
}

void AHeavyParticleCannon::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AHeavyParticleCannon::OnRep_BoostActive() {
}

void AHeavyParticleCannon::OnRep_bIsBeamActive() {
}

void AHeavyParticleCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeavyParticleCannon, BoostActive);
    DOREPLIFETIME(AHeavyParticleCannon, bIsBeamActive);
}

AHeavyParticleCannon::AHeavyParticleCannon() {
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->HitscanComponent = CreateDefaultSubobject<UReflectionHitscanComponent>(TEXT("ReflectionHitscanComponent"));
    this->StickyFlamesSpawner = CreateDefaultSubobject<UStickyFlameSpawner>(TEXT("StickyFlames"));
    this->FirstPersonBeam = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FirstPersonBeam"));
    this->FirstPersonLaserSight = CreateDefaultSubobject<UFirstPersonNiagaraComponent>(TEXT("FirstPersonLaserSight"));
    this->ThirdPersonBeam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ThirdPersonBeam"));
    this->BeamHitLocationGenericSound = NULL;
    this->BeamHitLocationEnemySound = NULL;
    this->BeamHitSoundFadeSwitchTime = 0.10f;
    this->BeamHitLocationTailSound = NULL;
    this->BoosterModuleActivated = NULL;
    this->ReflectedBeam = NULL;
    this->ReflectedLaserSight = NULL;
    this->ImpactParticle = NULL;
    this->ProjectionModuleParticle = NULL;
    this->ImpactParticleComp = NULL;
    this->bReloadOnButtonRelease = false;
    this->SecondsAddedPerKill = 0.00f;
    this->SwarmerBiomassPercentage = 0.20f;
    this->BulkyBeam = false;
    this->NormalBeamWidth = 3.00f;
    this->BulkyBeamWidth = 6.00f;
    this->ExtraRadialDamagePerSec = 0.00f;
    this->ExtraRadialRangePerSec = 0.00f;
    this->CancelCostPercentage = 0.20f;
    this->IsNewDecalBeam = true;
    this->ProjectionModuleDamage = 0.00f;
    this->PlatformTerrainType = NULL;
    this->BoostActive = false;
    this->bReloadBoostsBeam = false;
    this->ExtraReloadTimeAfterBoost = 1.00f;
    this->bIsBeamActive = false;
}

