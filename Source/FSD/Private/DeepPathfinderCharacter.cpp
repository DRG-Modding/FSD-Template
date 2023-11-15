#include "DeepPathfinderCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "DeepPatherFinderCharacterAfflictionComponent.h"
#include "DeepPathfinderMovement.h"
#include "DeepPathfinderSceneComponent.h"

ADeepPathfinderCharacter::ADeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeepPathfinderSceneComponent>(TEXT("SceneComponent"));
    this->PathfinderMovement = CreateDefaultSubobject<UDeepPathfinderMovement>(TEXT("PathfinderMovement"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Affliction = CreateDefaultSubobject<UDeepPatherFinderCharacterAfflictionComponent>(TEXT("Affliction"));
    this->AnimationOffset = 0.00f;
    this->CanPlayerStandOn = false;
    this->UseDormancy = false;
    this->StaggerDurationMultiplier = 1.00f;
    this->StaggerImunityWindow = 0.00f;
    this->StaggerPauseLogic = false;
    this->IsHidden = false;
    this->IsStaggered = false;
    this->FrozenPauseLogic = false;
    this->CurrentStaggerAffliction = NULL;
    this->AttackerRadius = 65.00f;
    this->AllowedInFormationChance = 0.75f;
    this->Mesh->SetupAttachment(RootComponent);
}

bool ADeepPathfinderCharacter::TryJoinFormation() {
    return false;
}

void ADeepPathfinderCharacter::SetHidden(bool shouldHide) {
}

void ADeepPathfinderCharacter::OnPausedMovementElapsed() {
}


void ADeepPathfinderCharacter::LeaveFormation() {
}


