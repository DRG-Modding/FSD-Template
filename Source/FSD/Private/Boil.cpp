#include "Boil.h"
#include "Net/UnrealNetwork.h"

ABoil::ABoil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialIndex = -1;
}

void ABoil::OnRep_MaterialIndex() {
}

void ABoil::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABoil, MaterialIndex);
}


