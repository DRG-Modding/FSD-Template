#include "FSDAnselFunctionLibrary.h"

class UObject;

void UFSDAnselFunctionLibrary::StopPhotographySession(UObject* WorldContextObject) {
}

void UFSDAnselFunctionLibrary::StartPhotographySession(UObject* WorldContextObject) {
}

void UFSDAnselFunctionLibrary::SetUIControlVisibility(UObject* WorldContextObject, const TEnumAsByte<EUIControlEffectTarget> UIControlTarget, const bool bIsVisible) {
}

void UFSDAnselFunctionLibrary::SetSettleFrames(const int32 NumSettleFrames) {
}

void UFSDAnselFunctionLibrary::SetIsPhotographyAllowed(const bool bIsPhotographyAllowed) {
}

void UFSDAnselFunctionLibrary::SetCameraMovementSpeed(const float TranslationSpeed) {
}

void UFSDAnselFunctionLibrary::SetCameraConstraintDistance(const float MaxCameraDistance) {
}

void UFSDAnselFunctionLibrary::SetCameraConstraintCameraSize(const float CameraSize) {
}

void UFSDAnselFunctionLibrary::SetAutoPostprocess(const bool bShouldAutoPostprocess) {
}

void UFSDAnselFunctionLibrary::SetAutoPause(const bool bShouldAutoPause) {
}

bool UFSDAnselFunctionLibrary::IsPhotographyAvailable() {
    return false;
}

bool UFSDAnselFunctionLibrary::IsPhotographyAllowed() {
    return false;
}

void UFSDAnselFunctionLibrary::ConstrainCameraByGeometry(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation) {
}

void UFSDAnselFunctionLibrary::ConstrainCameraByDistance(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance) {
}

UFSDAnselFunctionLibrary::UFSDAnselFunctionLibrary() {
}

