#include "InstancedMeshOnSpline.h"

UInstancedMeshOnSpline::UInstancedMeshOnSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = NULL;
    this->NumInstances = 8;
    this->Speed = 1.00f;
    this->VerticalOffset = 0.00f;
    this->Phase = 0.00f;
}

void UInstancedMeshOnSpline::SetSpeed(float newSpeed) {
}


