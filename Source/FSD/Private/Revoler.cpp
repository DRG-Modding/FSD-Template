#include "Revoler.h"

ARevoler::ARevoler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnKillFearFactor = 0.00f;
    this->OnKillFearRange = 500.00f;
}

void ARevoler::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}


