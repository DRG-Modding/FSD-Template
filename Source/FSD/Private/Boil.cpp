#include "Boil.h"
#include "Net/UnrealNetwork.h"

void ABoil::OnRep_MaterialIndex() {
}

void ABoil::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABoil, MaterialIndex);
}

ABoil::ABoil() {
    this->MaterialIndex = -1;
}

