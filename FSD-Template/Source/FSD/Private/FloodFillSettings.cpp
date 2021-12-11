#include "FloodFillSettings.h"

UFloodFillSettings::UFloodFillSettings() {
    this->FreqMultiplier = 2.00f;
    this->AmplitudeMultiplier = 0.00f;
    this->MinValue = -1.00f;
    this->MaxValue = 1.00f;
    this->Turbulence = false;
    this->Invert = false;
    this->Octaves = 1;
}

