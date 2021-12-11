#include "SimpleArmorDamageComponent.h"
#include "Net/UnrealNetwork.h"

void USimpleArmorDamageComponent::Server_SetArmorIndexDestroyed_Implementation(int32 Index, bool Disolved) {
}

void USimpleArmorDamageComponent::OnRep_ArmorDamageIndexMask(uint32 OldIndexMask) {
}

void USimpleArmorDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleArmorDamageComponent, ArmorDamageIndexMask);
}

USimpleArmorDamageComponent::USimpleArmorDamageComponent() {
    this->ArmorStrength = 10.00f;
    this->ArmorDamageIndexMask = 0;
}

