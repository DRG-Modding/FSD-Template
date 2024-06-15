#include "TentaclePlant.h"
#include "Net/UnrealNetwork.h"

ATentaclePlant::ATentaclePlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsVulnerable = false;
    this->AmountOfNodes = 4;
    this->MinimumDistance = 500.00f;
    this->MinDistanceBetweenNodes = 0.00f;
    this->NodeType = NULL;
    this->NodePositioning = NULL;
}

void ATentaclePlant::OnRep_IsVulnerable() {
}




void ATentaclePlant::DestroyNode(ATentaclePlantNode* Node) {
}

void ATentaclePlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATentaclePlant, IsVulnerable);
}


