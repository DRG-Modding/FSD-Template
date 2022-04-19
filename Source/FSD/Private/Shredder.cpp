#include "Shredder.h"
#include "Net/UnrealNetwork.h"

void AShredder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShredder, CurrentTarget);
}

AShredder::AShredder() {
    this->FoldoutRange = 0.00f;
    this->SpinRange = 0.00f;
    this->CurrentTarget = NULL;
}

