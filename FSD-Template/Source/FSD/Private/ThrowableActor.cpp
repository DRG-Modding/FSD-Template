#include "ThrowableActor.h"
#include "Net/UnrealNetwork.h"



void AThrowableActor::OnRep_IsMoving() {
}

void AThrowableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableActor, IsMoving);
}

AThrowableActor::AThrowableActor() {
    this->IsMoving = true;
    this->IgnoreFellOutOfWorld = false;
    this->IgnoreOwnersCollision = true;
}

