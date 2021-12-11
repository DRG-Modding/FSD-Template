#include "MotionAudioController.h"

UMotionAudioController::UMotionAudioController() {
    this->MaxValue = 0.00f;
    this->IncreseSpeed = 0.00f;
    this->DecaySpeed = 0.00f;
    this->DebugText = false;
    this->Clamp = false;
    this->Interp = false;
    this->AccelerationThreshold = 0.00f;
    this->SpeedThreshold = 0.00f;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->AutoPlayOnSpeedThreshold = true;
}

