#include "CoilGunAnimInstance.h"

float UCoilGunAnimInstance::GetCoilSpeed(int32 Index) const {
    return 0.0f;
}

float UCoilGunAnimInstance::GetCoilAngle(int32 Index) const {
    return 0.0f;
}

UCoilGunAnimInstance::UCoilGunAnimInstance() {
    this->WindUpSpeed = 1.00f;
    this->WindDownSpeed = 1.20f;
    this->MaxExtention = -7.00f;
    this->HandleExtend = 0.00f;
    this->MaxCoilSpeed = 15.00f;
    this->CoilGun = NULL;
}

