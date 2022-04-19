#include "ProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

class AProjectileBase;

void UProjectileLauncherComponent::SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass) {
}

UProjectileLauncherComponent::UProjectileLauncherComponent() {
    this->ProjectileClass = NULL;
}

