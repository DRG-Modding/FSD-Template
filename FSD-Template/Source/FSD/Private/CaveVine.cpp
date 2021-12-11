#include "CaveVine.h"



ACaveVine::ACaveVine() {
    this->GroundCollisionChannel = ECC_WorldDynamic;
    this->IdleSwingSpeed = 25.00f;
    this->ChaseSpeed = 100.00f;
    this->MaxReach = 100.00f;
    this->GroundOffset = 150.00f;
    this->NoiseRadius = 40.00f;
    this->NoiseSpeed = 0.20f;
}

