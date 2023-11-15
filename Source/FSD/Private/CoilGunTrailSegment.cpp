#include "CoilGunTrailSegment.h"
#include "Net/UnrealNetwork.h"

ACoilGunTrailSegment::ACoilGunTrailSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectsLife = 0.00f;
    this->DeactivationTime = 0.50f;
}


void ACoilGunTrailSegment::OnRep_EffectsLife() {
}


void ACoilGunTrailSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoilGunTrailSegment, EffectsLife);
}


