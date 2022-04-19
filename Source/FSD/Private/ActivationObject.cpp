#include "ActivationObject.h"
#include "SingleUsableComponent.h"

class APlayerCharacter;

void AActivationObject::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

AActivationObject::AActivationObject() {
    this->Usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("Usable"));
    this->HasBeenUsed = false;
}

