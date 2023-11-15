#include "CaveObject.h"

ACaveObject::ACaveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CanCharacterStandOn = true;
}

void ACaveObject::TriggerNetworkUpdate() {
}

void ACaveObject::ResumeNetworkUpdates() {
}


void ACaveObject::PauseNetworkUpdates() {
}


