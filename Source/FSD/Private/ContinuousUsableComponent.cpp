#include "ContinuousUsableComponent.h"
#include "Net/UnrealNetwork.h"

void UContinuousUsableComponent::SetCanUse(bool CanUse) {
}

void UContinuousUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UContinuousUsableComponent, Usable);
}

UContinuousUsableComponent::UContinuousUsableComponent() {
    this->TimeBetweenTicks = 1.00f;
    this->Usable = true;
}

