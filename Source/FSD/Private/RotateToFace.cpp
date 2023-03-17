#include "RotateToFace.h"

void URotateToFace::SetTarget(AActor* NewTarget) {
}

void URotateToFace::SetShouldFaceAway(bool FaceAway) {
}

URotateToFace::URotateToFace() {
    this->Target = NULL;
    this->Face = 1;
}

