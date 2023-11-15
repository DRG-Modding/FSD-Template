#include "ShootingPlant.h"
#include "Net/UnrealNetwork.h"

AShootingPlant::AShootingPlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsVisible = false;
    this->Target = NULL;
}

void AShootingPlant::SetTarget(AActor* NewTarget) {
}

void AShootingPlant::OnRep_Target_Implementation() {
}

void AShootingPlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShootingPlant, IsVisible);
    DOREPLIFETIME(AShootingPlant, Target);
}


