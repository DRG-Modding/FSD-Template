#include "SDFRandomizeTransformProperties.h"

FSDFRandomizeTransformProperties::FSDFRandomizeTransformProperties() {
    this->RotationMinZ = 0.00f;
    this->RotationMaxZ = 0.00f;
    this->RotationMinY = 0.00f;
    this->RotationMaxY = 0.00f;
    this->RotationMinX = 0.00f;
    this->RotationMaxX = 0.00f;
    this->ScaleAxesIndependent = false;
    this->DisableRandomize = false;
    this->Seed = 0;
}

