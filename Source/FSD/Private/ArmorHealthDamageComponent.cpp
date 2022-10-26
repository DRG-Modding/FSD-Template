#include "ArmorHealthDamageComponent.h"
#include "Net/UnrealNetwork.h"

bool UArmorHealthDamageComponent::SetHealthOnBodypartItem(FName BoneName, float newHealth) {
    return false;
}

void UArmorHealthDamageComponent::SetHealthOnAllItems(float newHealth) {
}

void UArmorHealthDamageComponent::RegrowAllArmor(float baseHealth) {
}

void UArmorHealthDamageComponent::PopAllWeakPoints() {
}

void UArmorHealthDamageComponent::OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue) {
}

void UArmorHealthDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArmorHealthDamageComponent, ArmorDamageInfo);
}

UArmorHealthDamageComponent::UArmorHealthDamageComponent() {
    this->RadialSocketDamageMultiplier = 1.00f;
    this->AffectedByAmorBreak = true;
}

