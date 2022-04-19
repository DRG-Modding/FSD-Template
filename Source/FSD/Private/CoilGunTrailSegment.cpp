#include "CoilGunTrailSegment.h"
#include "Net/UnrealNetwork.h"


void ACoilGunTrailSegment::OnRep_EffectsLife() {
}


void ACoilGunTrailSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoilGunTrailSegment, EffectsLife);
}

ACoilGunTrailSegment::ACoilGunTrailSegment() {
    this->EffectsLife = 0.00f;
    this->DeactivationTime = 0.50f;
}

