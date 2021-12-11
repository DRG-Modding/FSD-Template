#include "CSGTriangleMapper.h"

UCSGTriangleMapper::UCSGTriangleMapper() {
    this->Enabled = true;
    this->AttachToMaterial = NULL;
    this->CellCategories = 3;
    this->DensityInM2 = 1.00f;
    this->MinVerticalAngle = 0.00f;
    this->MaxVerticalAngle = 45.00f;
    this->ScaleBias = 0.90f;
    this->IndependentScaleAxes = false;
    this->SurfaceNormalFactor = 0.00f;
    this->RandomNormalFactor = 1.00f;
    this->RotationMinAngle = -180.00f;
    this->RotationMaxAngle = 180.00f;
    this->PosOffset = 0.00f;
    this->PosOffsetSurface = 0.00f;
}

