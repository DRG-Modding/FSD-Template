#include "ShootingPlant.h"
#include "Net/UnrealNetwork.h"

class AActor;

void AShootingPlant::SetTarget(AActor* NewTarget) {
}

void AShootingPlant::OnRep_Target_Implementation() {
}

void AShootingPlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShootingPlant, IsVisible);
    DOREPLIFETIME(AShootingPlant, Target);
}

AShootingPlant::AShootingPlant() {
    this->IsVisible = false;
    this->Target = NULL;
}

