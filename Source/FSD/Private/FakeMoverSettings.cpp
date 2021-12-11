#include "FakeMoverSettings.h"

UFakeMoverSettings::UFakeMoverSettings() {
    this->PathfinderColiSize = DeepPathFinderSize::Small;
    this->StickToSurface = false;
    this->AlignRotationToSurface = false;
    this->AirFriction = 0.01f;
    this->SurfaceFriction = 0.01f;
    this->Gravity = -980.00f;
    this->AirGravity = -980.00f;
}

