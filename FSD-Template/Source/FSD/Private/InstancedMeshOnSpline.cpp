#include "InstancedMeshOnSpline.h"

void UInstancedMeshOnSpline::SetSpeed(float newSpeed) {
}

UInstancedMeshOnSpline::UInstancedMeshOnSpline() {
    this->Spline = NULL;
    this->NumInstances = 8;
    this->Speed = 1.00f;
    this->VerticalOffset = 0.00f;
    this->Phase = 0.00f;
}

