#include "PlayerAnimInstance.h"

class UUseAnimationSetting;
class UItemCharacterAnimationSet;

bool UPlayerAnimInstance::StopUseMontage(bool stopImmediately) {
    return false;
}



void UPlayerAnimInstance::SetAiming() {
}

void UPlayerAnimInstance::PlayUseMontages(UUseAnimationSetting* useSetting) {
}

bool UPlayerAnimInstance::IsPlayingMontageInGroup(FName GroupName) const {
    return false;
}

UItemCharacterAnimationSet* UPlayerAnimInstance::GetAnimationSet() const {
    return NULL;
}

float UPlayerAnimInstance::CalculateDirectionVertical(const FVector& TargetDirection, const FRotator& BaseRotation) const {
    return 0.0f;
}

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->IsFirstPerson = false;
    this->WalkTreshhold = 200.00f;
    this->Character = NULL;
    this->DefaultFootstepParticle = NULL;
    this->DefaultFootStepSound = NULL;
    this->AnimationSetA = NULL;
    this->AnimationSetB = NULL;
    this->AnimationSetAIsPrimary = true;
    this->CharacterState = ECharacterState::Walking;
    this->Speed = 0.00f;
    this->WalkAnimationSpeed = 140.00f;
    this->RunAnimationSpeed = 400.00f;
    this->WalkRate = 0.00f;
    this->RunRate = 0.00f;
    this->Direction = 0.00f;
    this->IsInitialized = false;
    this->Pitch = 0.00f;
    this->IsStandingDown = false;
    this->IsInAir = false;
    this->IsMoving = false;
    this->IsWalking = false;
    this->IsSprinting = false;
    this->IsAiming = false;
    this->IsAlive = false;
    this->IsLyingDown = false;
    this->OnZipline = false;
    this->IsGrinding = false;
    this->IsParalyzed = false;
    this->IsGrabbed = false;
    this->IsAttached = false;
    this->BeingRevived = false;
    this->IsLookingAtMap = false;
    this->IsControllingEnemy = false;
    this->IsUsingTraversalTool = false;
    this->TraversalToolTargetHorizontalOffset = 0.00f;
    this->TraversalToolTargetVerticalOffset = 0.00f;
    this->TraversalToolSpeedRate = 0.00f;
    this->GliderAnimationLength = 1.00f;
    this->IsAllowedToPlayMovementAnim = false;
    this->CropBeard = 0.00f;
    this->ActiveUseMontage = NULL;
    this->CurrentUseSetting = NULL;
    this->EndUseMontageToPlay = NULL;
    this->AimDuration = 1.00f;
    this->ReviveProgress = 0.00f;
    this->ReviveExplicitTime = 0.00f;
    this->IdleTimeForInspect = 3.00f;
    this->RepeatDealayForInspect = 10.00f;
    this->CharacterMoveDirection = ECharacterMoveDirection::None;
    this->MoveAdjustmentAngle = 0.00f;
    this->CarryAnimationSet = NULL;
    this->DefaultAnimationSet = NULL;
}

