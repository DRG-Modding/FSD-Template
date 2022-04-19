#include "Revoler.h"

class AActor;
class UFSDPhysicalMaterial;

void ARevoler::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

ARevoler::ARevoler() {
    this->OnKillFearFactor = 0.00f;
    this->OnKillFearRange = 500.00f;
}

