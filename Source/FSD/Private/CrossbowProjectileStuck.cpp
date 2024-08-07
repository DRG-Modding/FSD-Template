#include "CrossbowProjectileStuck.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ACrossbowProjectileStuck::ACrossbowProjectileStuck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->StuckProjectileEffect = ECrossbowStuckType::Default;
    this->BansheePulseEnabled = false;
    this->IsPlayingElectricRangeEffect = true;
    this->AppliedEffect = NULL;
    this->StatusEffectTime = 0.00f;
    this->AttachmentRoot = (USphereComponent*)RootComponent;
    this->RecallComponent = NULL;
    this->BansheeComponent = NULL;
    this->BansheePulseComponent = NULL;
    this->LaserCollider = NULL;
    this->BaseProjectile = NULL;
}

void ACrossbowProjectileStuck::UsableChanged(bool CanUse) {
}

void ACrossbowProjectileStuck::OnUsedBy(APlayerCharacter* Player, EInputKeys Key) {
}

void ACrossbowProjectileStuck::OnRep_BansheePulseEnabled() {
}

void ACrossbowProjectileStuck::MatchParentDestroy(UHealthComponentBase* destroyed) {
}

bool ACrossbowProjectileStuck::IsLocallyControlled() const {
    return false;
}

bool ACrossbowProjectileStuck::GetSpecialArrowEquipped() const {
    return false;
}

void ACrossbowProjectileStuck::All_OnCavePointRemoved_Implementation(USceneComponent* Point) {
}

void ACrossbowProjectileStuck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileStuck, BansheePulseEnabled);
    DOREPLIFETIME(ACrossbowProjectileStuck, StatusEffectTime);
    DOREPLIFETIME(ACrossbowProjectileStuck, BaseProjectile);
}


