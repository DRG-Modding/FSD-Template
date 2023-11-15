#include "SimpleArmorDamageComponent.h"
#include "Net/UnrealNetwork.h"

USimpleArmorDamageComponent::USimpleArmorDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorStrength = 10.00f;
}

void USimpleArmorDamageComponent::OnRep_ArmorDamageInfo(FArmorDamageInfo OldArmorDamageInfo) {
}

void USimpleArmorDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleArmorDamageComponent, ArmorDamageInfo);
}


