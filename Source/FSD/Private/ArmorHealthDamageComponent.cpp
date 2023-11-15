#include "ArmorHealthDamageComponent.h"
#include "Net/UnrealNetwork.h"

UArmorHealthDamageComponent::UArmorHealthDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadialSocketDamageMultiplier = 1.00f;
    this->AffectedByAmorBreak = true;
}

bool UArmorHealthDamageComponent::SetHealthOnBodypartItem(FName BoneName, float newHealth) {
    return false;
}

void UArmorHealthDamageComponent::SetHealthOnAllItems(float newHealth) {
}

bool UArmorHealthDamageComponent::SetArmorDamageEnabledOnItem(FName BoneName, bool Enabled) {
    return false;
}

void UArmorHealthDamageComponent::RegrowAllArmor(float baseHealth) {
}

void UArmorHealthDamageComponent::PopAllWeakPoints() {
}

void UArmorHealthDamageComponent::OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue) {
}

void UArmorHealthDamageComponent::DealSocketArmorDamage(float Damage, float armorDamageMultiplier, UPrimitiveComponent* collider, bool shatter, EArmorDamageType DamageType) {
}

void UArmorHealthDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArmorHealthDamageComponent, ArmorDamageInfo);
}


