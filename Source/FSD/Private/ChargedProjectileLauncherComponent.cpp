#include "ChargedProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

class AProjectileBase;

void UChargedProjectileLauncherComponent::SetProjectileClassCharged(TSubclassOf<AProjectileBase> NewProjectileClass) {
}

void UChargedProjectileLauncherComponent::SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass) {
}

UChargedProjectileLauncherComponent::UChargedProjectileLauncherComponent() {
    this->NormalProjectileClass = NULL;
    this->ChargedProjectileClass = NULL;
    this->ProjectileChangeChargeValue = 1.00f;
}

