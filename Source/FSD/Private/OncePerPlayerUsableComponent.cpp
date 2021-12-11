#include "OncePerPlayerUsableComponent.h"
#include "Net/UnrealNetwork.h"


void UOncePerPlayerUsableComponent::OnRep_Users() {
}

void UOncePerPlayerUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOncePerPlayerUsableComponent, Users);
}

UOncePerPlayerUsableComponent::UOncePerPlayerUsableComponent() {
}

