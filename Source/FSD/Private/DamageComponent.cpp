#include "DamageComponent.h"
#include "Templates/SubclassOf.h"

class UDamageComponent;
class AActor;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

void UDamageComponent::PreTestDamageConditions() {
}

UDamageComponent* UDamageComponent::GetDamageComponentCDO(TSubclassOf<UDamageComponent> DamageComponent) {
    return NULL;
}

float UDamageComponent::GetDamage() const {
    return 0.0f;
}

void UDamageComponent::DamageTargetFromHit(const FHitResult& HitResult) const {
}

void UDamageComponent::DamageTarget_CDO(const FVector& Location, AActor* Owner, AActor* hitActor) {
}

void UDamageComponent::DamageTarget(AActor* Target, const FVector& Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat, int32 BoneIndex) const {
}

void UDamageComponent::DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation) const {
}

void UDamageComponent::DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex) const {
}

bool UDamageComponent::ArmorSupportsLocalOnlyCall(AActor* Target) const {
    return false;
}

UDamageComponent::UDamageComponent() {
    this->DamageComponentType = EDamageComponentType::Primary;
    this->DamageImpulse = NULL;
    this->Damage = 5.00f;
    this->ArmorDamageMultiplier = 1.00f;
    this->ShattersArmor = false;
    this->DamageClass = NULL;
    this->ArmorDamageType = EArmorDamageType::Normal;
    this->WeakpointDamageMultiplier = 1.00f;
    this->FrozenDamageBonusScale = 1.00f;
    this->friendlyFireModifier = 1.00f;
    this->SelfFriendlyFireMultiplier = 1.00f;
    this->StaggerOnlyOnWeakpointHit = false;
    this->StaggerChance = 0.00f;
    this->StaggerDuration = 1.50f;
    this->FearFactor = 0.00f;
    this->UseAreaOfEffect = false;
    this->RadialDamage = 5.00f;
    this->NoFriendlyFireFromRadial = false;
    this->RadialDamageClass = NULL;
    this->MinDamagePct = 0.25f;
    this->DamageRadius = 100.00f;
    this->MaxDamageRadius = 50.00f;
}

