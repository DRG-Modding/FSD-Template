#include "TracerData.h"

FTracerData::FTracerData() {
    this->MainParticle = NULL;
    this->TrailParticle = NULL;
    this->Speed = 0.00f;
    this->WhizbySound = NULL;
    this->WhizBySoundCooldown = 0.00f;
    this->Offset = 0.00f;
    this->MinDistance = 0.00f;
}

