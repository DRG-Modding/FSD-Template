#include "PlayerTPAnimInstance.h"

void UPlayerTPAnimInstance::SetOverrideFullBody(bool overrideEnabled) {
}

UPlayerTPAnimInstance::UPlayerTPAnimInstance() {
    this->RigidBodyBlend = 1.00f;
    this->RigidBodyOn = false;
    this->UpperBodyBlend = 1.00f;
    this->AimingValue = 0.00f;
    this->FullBodyAnimActive = false;
    this->FullBodyBlendTime = 0.10f;
    this->BodyTurnRecoverySpeed = 10.00f;
    this->BodyTurnMaxAngle = 70.00f;
    this->BodyTurnLerpEXP = 2.00f;
    this->TurnAnimationDuration = 0.80f;
    this->bCaveLeechBiting = false;
    this->CaveLeechBiteReactDelay = 1.00f;
    this->IsResettingBodyTurn = false;
    this->TurningLeft = false;
    this->TurningRight = false;
    this->TurnProgress = 0.00f;
    this->HasPickedUpItem = false;
    this->IsLyingDownNoTransition = false;
    this->DanceMove = 0;
    this->DanceSequence = NULL;
    this->IsDancing = false;
    this->PickedUpItemBlend = 0.00f;
    this->AttachedBodyTurnFactor = 0.50f;
    this->AttachedHeadTurnFactor = 0.50f;
    this->TP_LookUpDown = NULL;
    this->TP_LookUpDown_Aim = NULL;
    this->A_TP_LookUpDown_Aim = NULL;
    this->B_TP_LookUpDown_Aim = NULL;
    this->TP_JumpLoop = NULL;
    this->TP_JumpLoop_Aim = NULL;
    this->TP_JumpStart = NULL;
    this->TP_JumpStart_Aim = NULL;
    this->TP_Sprint = NULL;
    this->A_TP_Idle = NULL;
    this->B_TP_Idle = NULL;
    this->A_TP_Idle_Aim = NULL;
    this->B_TP_Idle_Aim = NULL;
    this->TP_LookForward = NULL;
    this->A_TP_LookForward = NULL;
    this->B_TP_LookForward = NULL;
    this->A_TP_LookForward_Aim = NULL;
    this->B_TP_LookForward_Aim = NULL;
    this->A_TP_Walk_Forward = NULL;
    this->B_TP_Walk_Forward = NULL;
    this->A_TP_Run_Forward = NULL;
    this->B_TP_Run_Forward = NULL;
    this->A_TP_Walk_Forward_Aim = NULL;
    this->B_TP_Walk_Forward_Aim = NULL;
    this->A_TP_Run_Forward_Aim = NULL;
    this->B_TP_Run_Forward_Aim = NULL;
    this->A_TP_Walk_Right = NULL;
    this->B_TP_Walk_Right = NULL;
    this->A_TP_Run_Right = NULL;
    this->B_TP_Run_Right = NULL;
    this->A_TP_Walk_Right_Aim = NULL;
    this->B_TP_Walk_Right_Aim = NULL;
    this->A_TP_Run_Right_Aim = NULL;
    this->B_TP_Run_Right_Aim = NULL;
    this->A_TP_Walk_Left = NULL;
    this->B_TP_Walk_Left = NULL;
    this->A_TP_Run_Left = NULL;
    this->B_TP_Run_Left = NULL;
    this->A_TP_Walk_Left_Aim = NULL;
    this->B_TP_Walk_Left_Aim = NULL;
    this->A_TP_Run_Left_Aim = NULL;
    this->B_TP_Run_Left_Aim = NULL;
    this->A_TP_Walk_Back = NULL;
    this->B_TP_Walk_Back = NULL;
    this->A_TP_Run_Back = NULL;
    this->B_TP_Run_Back = NULL;
    this->A_TP_Walk_Back_Aim = NULL;
    this->B_TP_Walk_Back_Aim = NULL;
    this->A_TP_Run_Back_Aim = NULL;
    this->B_TP_Run_Back_Aim = NULL;
    this->TP_Revived = NULL;
    this->TP_Downed = NULL;
    this->TP_Downed_Loop = NULL;
}

