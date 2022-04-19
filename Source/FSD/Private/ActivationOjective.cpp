#include "ActivationOjective.h"
#include "Net/UnrealNetwork.h"

void UActivationOjective::OnRep_ObjectivesToFind(int32 prevAmount) {
}

void UActivationOjective::OnRep_ObjectivesFound(int32 prevAmount) {
}

void UActivationOjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActivationOjective, ObjectivesFound);
    DOREPLIFETIME(UActivationOjective, ObjectivesToFind);
}

UActivationOjective::UActivationOjective() {
    this->ObjectivesFound = 0;
    this->ObjectivesToFind = 0;
}

