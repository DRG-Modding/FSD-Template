#include "OncePerPlayerUsableComponent.h"
#include "Net/UnrealNetwork.h"

UOncePerPlayerUsableComponent::UOncePerPlayerUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UOncePerPlayerUsableComponent::OnRep_Users() {
}

void UOncePerPlayerUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOncePerPlayerUsableComponent, Users);
}


