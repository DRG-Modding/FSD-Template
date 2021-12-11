#include "BoscoAbillity.h"

UBoscoAbillity::UBoscoAbillity() {
    this->AbillityAnimation = NULL;
    this->VoiceOnUse = NULL;
    this->TargetType = EBoscoAbillityTargetPreference::Self;
    this->CoolDown = 0.00f;
    this->WindUp = 0.00f;
    this->Duration = 0.00f;
    this->range = 0.00f;
    this->RechargeTime = 0.00f;
    this->MaxCharges = -1;
    this->TargetActorIfValid = false;
    this->RotateTowardsTarget = false;
}

