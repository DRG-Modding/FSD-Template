#include "LightStrobeChannel.h"

FLightStrobeChannel::FLightStrobeChannel() {
    this->MinIntensity = 0.00f;
    this->MaxIntensity = 0.00f;
    this->TimeScale = 0.00f;
    this->MaterialMultiplier = 0.00f;
    this->Loops = 0;
    this->Mode = EStrobingMode::Intensity;
    this->MaterialMode = EStrobeMaterialMode::Material;
}

