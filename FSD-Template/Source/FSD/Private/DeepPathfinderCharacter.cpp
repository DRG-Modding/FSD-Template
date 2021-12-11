#include "DeepPathfinderCharacter.h"

bool ADeepPathfinderCharacter::TryJoinFormation() {
    return false;
}

void ADeepPathfinderCharacter::SetHidden(bool shouldHide) {
}

void ADeepPathfinderCharacter::OnPausedMovementElapsed() {
}


void ADeepPathfinderCharacter::LeaveFormation() {
}

ADeepPathfinderCharacter::ADeepPathfinderCharacter() {
    this->AnimationOffset = 0.00f;
    this->CanPlayerStandOn = false;
    this->UseDormancy = false;
    this->StaggerDurationMultiplier = 1.00f;
    this->StaggerImunityWindow = 0.00f;
    this->StaggerPauseLogic = false;
    this->IsHidden = false;
    this->IsStaggered = false;
    this->FrozenPauseLogic = false;
    this->AttackerRadius = 65.00f;
    this->AllowedInFormationChance = 0.75f;
}

