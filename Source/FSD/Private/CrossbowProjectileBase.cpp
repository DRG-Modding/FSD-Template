#include "CrossbowProjectileBase.h"
#include "Net/UnrealNetwork.h"

class USceneComponent;
class APlayerCharacter;

void ACrossbowProjectileBase::OnUsedBy(APlayerCharacter* Player, EInputKeys Key) {
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

void ACrossbowProjectileBase::ApplyDamageEffects(const FHitResult& HitResult) {
}

void ACrossbowProjectileBase::All_SetBansheePulseVisible_Implementation(bool Enabled) {
}

void ACrossbowProjectileBase::All_OnCavePointRemoved_Implementation(USceneComponent* Point) {
}

void ACrossbowProjectileBase::All_HideEverythingButTrail_Implementation(bool NewVisibility) {
}

void ACrossbowProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileBase, RecallComponent);
    DOREPLIFETIME(ACrossbowProjectileBase, MagneticComponent);
    DOREPLIFETIME(ACrossbowProjectileBase, RicochetComponent);
    DOREPLIFETIME(ACrossbowProjectileBase, BansheeComponent);
}

ACrossbowProjectileBase::ACrossbowProjectileBase() {
    this->StatusEffectTime = 0.00f;
    this->RecallComponent = NULL;
    this->MagneticComponent = NULL;
    this->RicochetComponent = NULL;
    this->BansheeComponent = NULL;
    this->BansheeComponentClass = NULL;
    this->RecallComponentClass = NULL;
    this->SpawnableStuckProjectile = NULL;
    this->OnDamageEffect = NULL;
    this->EffectApplication = ECrossbowEffectApplication::ToDefault;
    this->SelectionPriority = 0;
    this->CanEverBePickedUp = true;
    this->Penetrates = false;
    this->ImpactSound = NULL;
    this->ProjectileMesh = NULL;
    this->KillTrailAfterTime = 3.00f;
}

