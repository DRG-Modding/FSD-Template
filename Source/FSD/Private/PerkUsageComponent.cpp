#include "PerkUsageComponent.h"
#include "Net/UnrealNetwork.h"

void UPerkUsageComponent::Server_MarkPerkUsed_Implementation(UPerkAsset* Perk) {
}

void UPerkUsageComponent::Server_CheatReset_Implementation() {
}

void UPerkUsageComponent::OnRep_PerkUsageReplicated() {
}

void UPerkUsageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerkUsageComponent, PerkUsageReplicated);
}

UPerkUsageComponent::UPerkUsageComponent() {
}

