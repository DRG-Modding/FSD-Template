#include "ItemCharacterAnimationSet.h"

UItemCharacterAnimationSet::UItemCharacterAnimationSet() {
    this->FP_Idle = NULL;
    this->FP_InspectWeapon = NULL;
    this->FP_Walk = NULL;
    this->FP_Sprint = NULL;
    this->FP_JumpStart_Montage = NULL;
    this->FP_JumpStart = NULL;
    this->FP_JumpLoop = NULL;
    this->FP_JumpLand = NULL;
    this->FP_JumpLand_Aim = NULL;
    this->FP_Downed = NULL;
    this->TP_LookUpDown = NULL;
    this->TP_LookUpDown_Aim = NULL;
    this->TP_Sprint = NULL;
    this->TP_Idle = NULL;
    this->TP_Idle_Aim = NULL;
    this->TP_LookForward = NULL;
    this->TP_LookForward_Aim = NULL;
    this->TP_JumpStart = NULL;
    this->TP_JumpStart_Aim = NULL;
    this->TP_JumpLoop = NULL;
    this->TP_JumpLoop_Aim = NULL;
    this->TP_JumpLand = NULL;
    this->TP_Walk_Forward = NULL;
    this->TP_Walk_Forward_Aim = NULL;
    this->TP_Run_Forward = NULL;
    this->TP_Run_Forward_Aim = NULL;
    this->TP_Walk_Right = NULL;
    this->TP_Walk_Right_Aim = NULL;
    this->TP_Run_Right = NULL;
    this->TP_Run_Right_Aim = NULL;
    this->TP_Walk_Left = NULL;
    this->TP_Walk_Left_Aim = NULL;
    this->TP_Run_Left = NULL;
    this->TP_Run_Left_Aim = NULL;
    this->TP_Walk_Back = NULL;
    this->TP_Walk_Back_Aim = NULL;
    this->TP_Run_Back = NULL;
    this->TP_Run_Back_Aim = NULL;
    this->TP_Revived = NULL;
    this->TP_Downed = NULL;
    this->TP_Downed_Loop = NULL;
    this->CameraOffset = 0.00f;
    this->ParentSet = NULL;
}

