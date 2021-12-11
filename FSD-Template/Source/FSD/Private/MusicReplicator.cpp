#include "MusicReplicator.h"
#include "Net/UnrealNetwork.h"

void AMusicReplicator::OnRep_ActiveMusic() {
}

void AMusicReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMusicReplicator, ActiveMusic);
}

AMusicReplicator::AMusicReplicator() {
}

