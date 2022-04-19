#include "CrossbowProjectileStuck.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"

class USceneComponent;
class APlayerCharacter;
class UHealthComponentBase;

void ACrossbowProjectileStuck::OnUsedBy(APlayerCharacter* Player, EInputKeys Key) {
}

void ACrossbowProjectileStuck::MatchParentDestroy(UHealthComponentBase* destroyed) {
}

bool ACrossbowProjectileStuck::IsLocallyControlled() const {
    return false;
}

bool ACrossbowProjectileStuck::GetSpecialArrowEquipped() const {
    return false;
}

void ACrossbowProjectileStuck::All_SetBansheePulseVisible_Implementation(bool Enabled) {
}

void ACrossbowProjectileStuck::All_OnCavePointRemoved_Implementation(USceneComponent* Point) {
}

void ACrossbowProjectileStuck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowProjectileStuck, BaseProjectile);
}

ACrossbowProjectileStuck::ACrossbowProjectileStuck() {
    this->StuckProjectileEffect = ECrossbowStuckType::Default;
    this->IsPlayingElectricRangeEffect = true;
    this->AppliedEffect = NULL;
    this->StatusEffectTime = 0.00f;
    this->AttachmentRoot = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
}

