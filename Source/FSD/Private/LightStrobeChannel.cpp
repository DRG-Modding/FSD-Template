#include "LightStrobeChannel.h"

FLightStrobeChannel::FLightStrobeChannel() {
    this->MinIntensity = 0.00f;
    this->MaxIntensity = 0.00f;
    this->TimeScale = 0.00f;
    this->MaterialMultiplier = 0.00f;
    this->Mode = EStrobingMode::Intensity;
    this->MaterialMode = EStrobeMaterialMode::Material;
    this->Loops = 0;
}

