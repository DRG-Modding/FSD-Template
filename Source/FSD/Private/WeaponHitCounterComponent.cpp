#include "WeaponHitCounterComponent.h"

void UWeaponHitCounterComponent::Server_OnReloading_Implementation() {
}

void UWeaponHitCounterComponent::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void UWeaponHitCounterComponent::OnStoppedUsing() {
}

void UWeaponHitCounterComponent::OnReloading() {
}

void UWeaponHitCounterComponent::All_ShowDamageEffects_Implementation(const TArray<TWeakObjectPtr<AActor>>& Targets) {
}

UWeaponHitCounterComponent::UWeaponHitCounterComponent() {
    this->HitEffect = NULL;
    this->RequiresWeakpointHit = false;
}

