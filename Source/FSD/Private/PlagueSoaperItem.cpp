#include "PlagueSoaperItem.h"
#include "ProjectileLauncherComponent.h"

APlagueSoaperItem::APlagueSoaperItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->projectileLauncher = CreateDefaultSubobject<UProjectileLauncherComponent>(TEXT("projectileLauncher"));
    this->ProjectileClass = NULL;
}

void APlagueSoaperItem::OnWeaponFired(const FVector& Location) {
}


