#include "StabberVine.h"
#include "Net/UnrealNetwork.h"

AStabberVine::AStabberVine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AStabberVine::OnRep_DesiredTarget() {
}

void AStabberVine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStabberVine, DesiredTarget);
}


