#include "FuelLineSegment.h"

class UHealthComponentBase;

void AFuelLineSegment::ClientUpdateStartTransform_Implementation(const FVector& NewStartLocation) {
}
bool AFuelLineSegment::ClientUpdateStartTransform_Validate(const FVector& NewStartLocation) {
    return true;
}

void AFuelLineSegment::ChangeStartTransform(const FTransform& ChangedStartLocation) {
}

void AFuelLineSegment::CallbackOnDeath(UHealthComponentBase* InHealthComponent) {
}

void AFuelLineSegment::CallbackCanStartNextSegmentChanged(bool InCanStart) {
}

AFuelLineSegment::AFuelLineSegment() {
    this->EndPostHeightOffset = 0.00f;
    this->MaxLength = 500.00f;
    this->bHasMaxTurnAngle = false;
    this->MaxTurnAngle = 0.00f;
}

