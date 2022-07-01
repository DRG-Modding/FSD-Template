#include "ExplosionBaseComponent.h"

class UDamageComponent;
class UPrimitiveComponent;
class UPhysicalMaterial;

void UExplosionBaseComponent::DamageOnlyFromHit(const FHitResult& HitResult, UDamageComponent*& DamageComponent) {
}

void UExplosionBaseComponent::DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent*& DamageComponent) {
}

void UExplosionBaseComponent::DamageArmorClients(const FHitResult& HitResult, UDamageComponent*& DamageComponent) {
}

void UExplosionBaseComponent::DamageAndCarveFromHit(const FHitResult& HitResult, UDamageComponent*& DamageComponent) {
}

void UExplosionBaseComponent::DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent*& DamageComponent) {
}

void UExplosionBaseComponent::CarveOnly(FVector Location, FVector ImpactNormal) {
}

UExplosionBaseComponent::UExplosionBaseComponent() {
    this->CarveDiameterCM = 150.00f;
    this->CarveNoiseCM = 30.00f;
    this->CarveBurnThicknessCM = 10.00f;
    this->CarveNormalOffsetCM = 0.00f;
    this->CarveNormalSqueeze = 1.00f;
}

