#include "GDAudio.h"

FGDAudio::FGDAudio() {
    this->ReverbActor = NULL;
    this->DynamicReverbClass = NULL;
    this->SmallCaveRadius = 0.00f;
    this->MediumCaveRadius = 0.00f;
    this->LargeCaveRadius = 0.00f;
    this->FirstPersonPriority = 0.00f;
    this->ThirdPersonPriority = 0.00f;
}

