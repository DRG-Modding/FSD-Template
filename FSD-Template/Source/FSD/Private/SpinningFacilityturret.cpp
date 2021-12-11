#include "SpinningFacilityturret.h"
#include "Net/UnrealNetwork.h"

void ASpinningFacilityturret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpinningFacilityturret, TargetRotation);
}

ASpinningFacilityturret::ASpinningFacilityturret() {
    this->TurnCooldown = 1.00f;
    this->TurnTimer = 0.00f;
    this->Acceptance = 5.00f;
    this->TurnSpeed = 1.00f;
}

