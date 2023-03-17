#include "CrossbowProjectileBase.h"
#include "Net/UnrealNetwork.h"


void ACrossbowProjectileBase::SetSimpleDamageComponent(UDamageComponent* Component) {
}


void ACrossbowProjectileBase::SetMainDamageComponent(UDamageComponent* Component) {
}

void ACrossbowProjectileBase::Server_HandleImpact_Implementation(const FHitResult& HitResult, const FVector& RelativeLocation) {
}

void ACrossbowProjectileBase::OnRep_OnlyTrailShown() {
}

void ACrossbowProjectileBase::OnRep_BansheePulseActive() {
}

bool ACrossbowProjectileBase::IsLocallyControlled() const {
    return false;
}

bool ACrossbowProjectileBase::GetSpecialArrowEquipped() const {
    return false;
}

float ACrossbowProjectileBase::GetScaledStatusEffectTime() const {
    return 0.0f;
}

void ACrossbowProjectileBase::ApplyDamageEffects(const FHitResult& HitResult, const FVector& RelativeLocation) {
}

void ACrossbowProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileBase, BansheePulseActive);
    DOREPLIFETIME(ACrossbowProjectileBase, OnlyTrailShown);
}

ACrossbowProjectileBase::ACrossbowProjectileBase() {
    this->StatusEffectTime = 0.00f;
    this->BansheePulseActive = false;
    this->MagneticComponent = NULL;
    this->RicochetComponent = NULL;
    this->BansheeComponent = NULL;
    this->BansheePulseComponent = NULL;
    this->BansheeComponentClass = NULL;
    this->RecallComponentClass = NULL;
    this->SpawnableStuckProjectile = NULL;
    this->OnDamageEffect = NULL;
    this->EffectApplication = ECrossbowEffectApplication::ToDefault;
    this->SelectionPriority = 0;
    this->CanEverBePickedUp = true;
    this->Penetrates = false;
    this->ImpactSound = NULL;
    this->IsASpecialProjectile = false;
    this->MainDamageComponent = NULL;
    this->SimpleDamageComponent = NULL;
    this->ProjectileMesh = NULL;
    this->KillTrailAfterTime = 3.00f;
    this->OnlyTrailShown = false;
}

