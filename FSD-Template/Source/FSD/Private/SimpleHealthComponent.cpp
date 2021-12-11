#include "SimpleHealthComponent.h"
#include "Net/UnrealNetwork.h"

void USimpleHealthComponent::OnRep_Damage(float oldDamage) {
}

float USimpleHealthComponent::HealFromDeath(float Amount) {
    return 0.0f;
}

void USimpleHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleHealthComponent, Damage);
}

USimpleHealthComponent::USimpleHealthComponent() {
    this->Damage = 0.00f;
    this->MaxHealth = 100.00f;
    this->InvulnerableToNonDefinedResistances = false;
    this->bShowHealthBar = false;
    this->AutomaticFlushNetDormancy = false;
}

