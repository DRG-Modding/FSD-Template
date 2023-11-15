#include "RotateToFace.h"

URotateToFace::URotateToFace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Target = NULL;
    this->Face = 1;
}

void URotateToFace::SetTarget(AActor* NewTarget) {
}

void URotateToFace::SetShouldFaceAway(bool FaceAway) {
}


