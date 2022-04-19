#include "OxygenComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;

void UOxygenComponent::RegisterOxygenEvent(FOxygenTriggerDelegate OxygenCallback, float oxygenLevel, bool triggerOnOxygenLoss) {
}

void UOxygenComponent::OnRevived() {
}

void UOxygenComponent::OnRep_NetworkedOxygen(int32 OldValue) {
}

void UOxygenComponent::OnRep_IsReplenishingOxygen() {
}

void UOxygenComponent::OnDeath(UHealthComponentBase* HealthComponent) {
}

void UOxygenComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOxygenComponent, NetworkedOxygen);
    DOREPLIFETIME(UOxygenComponent, IsReplenishingOxygen);
}

UOxygenComponent::UOxygenComponent() {
    this->OxygenGivenOnRevive = 33.00f;
    this->CurrentOxygen = 100.00f;
    this->OxygenReplinishmentRate = 5.00f;
    this->NetworkedOxygen = 100;
    this->IsReplenishingOxygen = false;
    this->OxygenDepletionPersecond = 1.00f;
    this->NoOxygenStatusEffect = NULL;
}

