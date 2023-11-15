#include "Shredder.h"
#include "Net/UnrealNetwork.h"

AShredder::AShredder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoldoutRange = 0.00f;
    this->SpinRange = 0.00f;
    this->CurrentTarget = NULL;
}

void AShredder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShredder, CurrentTarget);
}


