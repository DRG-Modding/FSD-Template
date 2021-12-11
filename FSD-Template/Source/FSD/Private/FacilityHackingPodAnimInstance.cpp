#include "FacilityHackingPodAnimInstance.h"

class AActor;

void UFacilityHackingPodAnimInstance::SetSaluter(AActor* salutingTarget) {
}

void UFacilityHackingPodAnimInstance::ResetSaluteTarget() {
}

UFacilityHackingPodAnimInstance::UFacilityHackingPodAnimInstance() {
    this->SaluteTarget = NULL;
    this->IsHacking = false;
    this->PodState = EHackingPodState::EClosed;
    this->RadarDishAngle = 0.00f;
}

