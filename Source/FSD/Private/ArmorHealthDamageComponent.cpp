#include "ArmorHealthDamageComponent.h"
#include "Net/UnrealNetwork.h"

bool UArmorHealthDamageComponent::SetHealthOnBodypartItem(FName BoneName, float newHealth) {
    return false;
}

void UArmorHealthDamageComponent::SetHealthOnAllItems(float newHealth) {
}

void UArmorHealthDamageComponent::RegrowAllArmor(float baseHealth) {
}

void UArmorHealthDamageComponent::OnRep_ArmorDamageIndex(uint32 OldValue) {
}

void UArmorHealthDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArmorHealthDamageComponent, ArmorDamageIndex);
}

UArmorHealthDamageComponent::UArmorHealthDamageComponent() {
    this->ArmorDamageIndex = 0;
    this->AffectedByAmorBreak = true;
}

