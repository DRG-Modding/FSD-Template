#include "WeaponFireComponent.h"
#include "Net/UnrealNetwork.h"

UWeaponFireComponent::UWeaponFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SetAsWeaponFireComponent = false;
}

void UWeaponFireComponent::StopFire() {
}

void UWeaponFireComponent::Server_SetShotPower_Implementation(float shotPower) {
}

void UWeaponFireComponent::Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX) {
}

void UWeaponFireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponFireComponent, SetAsWeaponFireComponent);
}


