#include "ActivationObject.h"

class APlayerCharacter;

void AActivationObject::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

AActivationObject::AActivationObject() {
    this->HasBeenUsed = false;
}

