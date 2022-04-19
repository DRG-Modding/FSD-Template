#include "StabberVine.h"
#include "Net/UnrealNetwork.h"

void AStabberVine::OnRep_DesiredTarget() {
}

void AStabberVine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStabberVine, DesiredTarget);
}

AStabberVine::AStabberVine() {
}

