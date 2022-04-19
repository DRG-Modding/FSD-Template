#include "CharacterSightSensor.h"

UCharacterSightSensor::UCharacterSightSensor() {
    this->SensorActiveForMinDuration = 1.00f;
    this->MinimumDistance = -1.00f;
    this->MaximumDistance = -1.00f;
    this->bSensorActivated = false;
    this->TimeActive = 0.00f;
    this->LastSeenTime = 0.00f;
}

