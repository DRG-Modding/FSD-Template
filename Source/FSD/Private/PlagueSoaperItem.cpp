#include "PlagueSoaperItem.h"
#include "ProjectileLauncherComponent.h"

void APlagueSoaperItem::OnWeaponFired(const FVector& Location) {
}

APlagueSoaperItem::APlagueSoaperItem() {
    this->projectileLauncher = CreateDefaultSubobject<UProjectileLauncherComponent>(TEXT("projectileLauncher"));
    this->ProjectileClass = NULL;
}

