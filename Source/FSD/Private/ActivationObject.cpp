#include "ActivationObject.h"
#include "SingleUsableComponent.h"

AActivationObject::AActivationObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("Usable"));
    this->HasBeenUsed = false;
}

void AActivationObject::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}


