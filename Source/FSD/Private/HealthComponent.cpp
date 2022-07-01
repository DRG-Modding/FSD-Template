#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

void UHealthComponent::ToggleCanTakeDamage_Implementation() {
}
bool UHealthComponent::ToggleCanTakeDamage_Validate() {
    return true;
}

void UHealthComponent::Resupply(float percentage) {
}

void UHealthComponent::OnRep_Damage(float oldDamage) {
}

void UHealthComponent::HealArmor(float Amount) {
}

bool UHealthComponent::HasArmor() const {
    return false;
}

float UHealthComponent::GetMaxArmor() const {
    return 0.0f;
}

void UHealthComponent::GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent) {
}

float UHealthComponent::GetArmorPct() const {
    return 0.0f;
}

float UHealthComponent::GetArmor() const {
    return 0.0f;
}

void UHealthComponent::Client_ReceivedHit_Implementation(float Amount, const FDamageData& DamageData, bool anyHealthLost) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, Damage);
}

UHealthComponent::UHealthComponent() {
    this->Damage = 0.00f;
    this->CanDamageThroughSegments = true;
    this->ShouldUseLargestSubhealthDamageTaken = false;
    this->InvulnerableToNonDefinedResistances = false;
    this->AffectedByGlobalWeakpointDamageMultiplier = true;
    this->UseDormancy = false;
    this->PawnStats = NULL;
}

