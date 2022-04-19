#include "SimpleArmorDamageComponent.h"
#include "Net/UnrealNetwork.h"

void USimpleArmorDamageComponent::Server_SetArmorIndexDestroyed_Implementation(int32 Index, EArmorDamageType DamageType) {
}

void USimpleArmorDamageComponent::OnRep_ArmorDamageInfo(FArmorDamageInfo OldArmorDamageInfo) {
}

void USimpleArmorDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleArmorDamageComponent, ArmorDamageInfo);
}

USimpleArmorDamageComponent::USimpleArmorDamageComponent() {
    this->ArmorStrength = 10.00f;
}

