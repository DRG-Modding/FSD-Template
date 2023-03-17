#include "ProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

void UProjectileLauncherComponent::SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass) {
}

UProjectileLauncherComponent::UProjectileLauncherComponent() {
    this->ProjectileClass = NULL;
}

