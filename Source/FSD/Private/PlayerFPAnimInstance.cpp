#include "PlayerFPAnimInstance.h"

UPlayerFPAnimInstance::UPlayerFPAnimInstance() {
    this->HeadBobScale = 1.00f;
    this->WeaponSwayRecoverySpeed = 10.00f;
    this->WeaponSwayAlphaRecoverySpeed = 25.00f;
    this->WeaponSwayMaxAngle = 10.00f;
    this->WeaponSwayAlpha = 1.00f;
    this->WeaponSwayToApply = 0.00f;
    this->HeadOnlyMode = false;
    this->FP_Idle = NULL;
    this->FP_Walk = NULL;
    this->FP_Sprint = NULL;
    this->FP_JumpStart = NULL;
    this->FP_JumpLoop = NULL;
    this->FP_JumpLand = NULL;
    this->FP_JumpLand_Aim = NULL;
    this->FP_Downed = NULL;
}

