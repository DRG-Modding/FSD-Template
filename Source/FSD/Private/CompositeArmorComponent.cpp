#include "CompositeArmorComponent.h"
#include "Net/UnrealNetwork.h"

UCompositeArmorComponent::UCompositeArmorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakParticle = NULL;
    this->AffectedByAmorBreak = true;
}

void UCompositeArmorComponent::OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue) {
}

void UCompositeArmorComponent::AddArmorPart(UPrimitiveComponent* Primitive, float Health, bool overrideAffectedByArmomrBreak, bool NewAffectedByArmorBreak) {
}

void UCompositeArmorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCompositeArmorComponent, ArmorDamageInfo);
}


