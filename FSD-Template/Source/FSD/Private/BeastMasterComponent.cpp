#include "BeastMasterComponent.h"
#include "Templates/SubclassOf.h"

class UDamageComponent;
class UActorComponent;
class AFSDPawn;
class APlayerCharacter;

void UBeastMasterComponent::SetDamage(UDamageComponent* cmp, float dmg) {
}

UActorComponent* UBeastMasterComponent::AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner) {
    return NULL;
}

UBeastMasterComponent::UBeastMasterComponent() {
    this->ShowCanCharmIcon = false;
}

