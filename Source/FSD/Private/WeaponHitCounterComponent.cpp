#include "WeaponHitCounterComponent.h"

UWeaponHitCounterComponent::UWeaponHitCounterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitEffect = NULL;
    this->RequiresWeakpointHit = false;
}

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


