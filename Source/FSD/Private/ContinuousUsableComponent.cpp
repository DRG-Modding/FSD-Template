#include "ContinuousUsableComponent.h"
#include "Net/UnrealNetwork.h"

UContinuousUsableComponent::UContinuousUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeBetweenTicks = 1.00f;
    this->Usable = true;
}

void UContinuousUsableComponent::SetCanUse(bool CanUse) {
}

void UContinuousUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UContinuousUsableComponent, Usable);
}


