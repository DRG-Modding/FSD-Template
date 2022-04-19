#include "CaretagerBodyAnimInstance.h"

UCaretagerBodyAnimInstance::UCaretagerBodyAnimInstance() {
    this->CoolingOff = false;
    this->IsWeakpointAVisible = false;
    this->IsWeakpointBVisible = false;
    this->IsWeakpointCVisible = false;
    this->IsWeakpointDVisible = false;
    this->RotationAngle = 0.00f;
    this->AoEStage = 0;
    this->IsSpawningDrones = false;
    this->IsSpawningBombs = false;
    this->IsSpawningShredders = false;
    this->IsSpawningTurrets = false;
}

