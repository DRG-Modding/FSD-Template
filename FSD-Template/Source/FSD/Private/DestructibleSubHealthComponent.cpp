#include "DestructibleSubHealthComponent.h"
#include "Net/UnrealNetwork.h"

void UDestructibleSubHealthComponent::ResetHealth() {
}

void UDestructibleSubHealthComponent::OnRep_Damage(float oldDamage) {
}

void UDestructibleSubHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestructibleSubHealthComponent, Damage);
}

UDestructibleSubHealthComponent::UDestructibleSubHealthComponent() {
    this->MaxHealth = 0.00f;
    this->RadialDamageResistance = 0.00f;
    this->AllowInderectDamage = false;
    this->PassthroughDamageWhenDisabled = true;
    this->Damage = 0.00f;
    this->ArmorComponent = NULL;
}

