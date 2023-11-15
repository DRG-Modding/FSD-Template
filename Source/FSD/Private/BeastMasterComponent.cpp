#include "BeastMasterComponent.h"
#include "Templates/SubclassOf.h"

UBeastMasterComponent::UBeastMasterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShowCanCharmIcon = false;
}

void UBeastMasterComponent::SetDamage(UDamageComponent* cmp, float dmg) {
}

UActorComponent* UBeastMasterComponent::AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner) {
    return NULL;
}


