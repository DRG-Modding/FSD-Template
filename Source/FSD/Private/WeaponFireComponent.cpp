#include "WeaponFireComponent.h"

UWeaponFireComponent::UWeaponFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWeaponFireComponent::StopFire() {
}

void UWeaponFireComponent::Server_SetShotPower_Implementation(float shotPower) {
}

void UWeaponFireComponent::Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX) {
}


