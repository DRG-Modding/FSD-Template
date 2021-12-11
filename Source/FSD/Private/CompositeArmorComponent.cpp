#include "CompositeArmorComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;

void UCompositeArmorComponent::OnRep_ArmorDamageIndex(uint32 OldValue) {
}

void UCompositeArmorComponent::AddArmorPart(UPrimitiveComponent* Primitive, float Health) {
}

void UCompositeArmorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCompositeArmorComponent, ArmorDamageIndex);
}

UCompositeArmorComponent::UCompositeArmorComponent() {
    this->BreakParticle = NULL;
    this->AffectedByAmorBreak = true;
    this->ArmorDamageIndex = 0;
}

