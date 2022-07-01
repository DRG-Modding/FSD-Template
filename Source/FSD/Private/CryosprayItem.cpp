#include "CryosprayItem.h"
#include "Net/UnrealNetwork.h"
#include "StickyFlameSpawner.h"
#include "ProjectileLauncherComponent.h"
#include "DamageComponent.h"
#include "MotionAudioController.h"
#include "FSDAudioComponent.h"

class UHealthComponentBase;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class AProjectileBase;

void ACryosprayItem::ServerDoDamage_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power) {
}
bool ACryosprayItem::ServerDoDamage_Validate(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power) {
    return true;
}

void ACryosprayItem::Server_TriggerAoECold_Implementation() {
}
bool ACryosprayItem::Server_TriggerAoECold_Validate() {
    return true;
}

void ACryosprayItem::Server_PreLaunchProjectile_Implementation() {
}
bool ACryosprayItem::Server_PreLaunchProjectile_Validate() {
    return true;
}


void ACryosprayItem::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void ACryosprayItem::OnRep_IsCharging(bool OldValue) {
}

void ACryosprayItem::OnProjectileSpawned(AProjectileBase* Projectile) {
}


void ACryosprayItem::OnPressurizedPartileShoot() {
}


void ACryosprayItem::All_PreLaunchProjectile_Implementation() {
}

void ACryosprayItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACryosprayItem, isCharging);
}

ACryosprayItem::ACryosprayItem() {
    this->projectileLauncher = CreateDefaultSubobject<UProjectileLauncherComponent>(TEXT("projectileLauncher"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->StickyFlames = CreateDefaultSubobject<UStickyFlameSpawner>(TEXT("StickyFlames"));
    this->AoEColdDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("AoEDamageComponent"));
    this->VelocityAudio = CreateDefaultSubobject<UMotionAudioController>(TEXT("MotionAudio"));
    this->FlameParticleComponent = NULL;
    this->PressurizedProjectileEnabled = false;
    this->PressurizedProjectileDelay = 1.00f;
    this->PressurizeProjectileFullCost = 25;
    this->ChargeupParticles = NULL;
    this->ChargeupParticleInstance = NULL;
    this->DecalDelay = 0.20f;
    this->ImpactParticles = NULL;
    this->ImpactParticleInstance = NULL;
    this->DamageSphereRadius = 25.00f;
    this->MaxFlameDistance = 5000.00f;
    this->FlameGrowthPerSecond = 1000.00f;
    this->friendlyFireModifier = 1.00f;
    this->ChargeupTime = 1.00f;
    this->ChargeDownTime = 1.00f;
    this->isCharging = false;
    this->ChargeProgress = 0.00f;
    this->bRepressurerising = false;
    this->RepressurerisingDoneAtPct = 0.25f;
    this->ChargeUpFadeOutTime = 0.50f;
    this->ChargeUpAudioComponent = CreateDefaultSubobject<UFSDAudioComponent>(TEXT("ChargeUpAudioComponent"));
    this->PressureTime = 5.00f;
    this->PressureDropMultiplier = 1.00f;
    this->PressureGainMultiplier = 1.00f;
    this->CurrentPressure = 0.00f;
    this->RePressureDuration = 1.00f;
    this->RePressureProgress = 0.00f;
    this->LongReachEnabled = false;
    this->AoEColdEnabled = false;
}

