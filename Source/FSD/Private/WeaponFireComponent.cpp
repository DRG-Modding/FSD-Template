#include "WeaponFireComponent.h"

void UWeaponFireComponent::StopFire() {
}

void UWeaponFireComponent::Server_SetShotPower_Implementation(float shotPower) {
}
bool UWeaponFireComponent::Server_SetShotPower_Validate(float shotPower) {
    return true;
}

void UWeaponFireComponent::Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX) {
}

UWeaponFireComponent::UWeaponFireComponent() {
}

