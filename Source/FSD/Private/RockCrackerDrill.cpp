#include "RockCrackerDrill.h"
#include "SingleUsableComponent.h"

void ARockCrackerDrill::SetIsDrilling(bool isDrilling) {
}

bool ARockCrackerDrill::GetIsDrilling() const {
    return false;
}

ARockCrackerDrill::ARockCrackerDrill() {
    this->ConstructUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("ConstructUsable"));
}

