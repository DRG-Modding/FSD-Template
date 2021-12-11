#include "VanityAnimInstance.h"

UVanityAnimInstance::UVanityAnimInstance() {
    this->VanitySlot = EVanitySlot::Beard;
    this->ArmorCoversBeard = false;
    this->ExternalForceMultiplier = 1.00f;
    this->MaxForce = 1000.00f;
}

