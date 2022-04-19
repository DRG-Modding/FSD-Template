#include "CablePathSettings.h"

FCablePathSettings::FCablePathSettings() {
    this->PathType = DeepPathFinderType::Walk;
    this->PathSize = DeepPathFinderSize::Invalid;
    this->PathPreference = DeepPathFinderPreference::None;
    this->MinStepSize = 0.00f;
    this->MaxStepSize = 0.00f;
    this->MaxNoiseY = 0.00f;
}

