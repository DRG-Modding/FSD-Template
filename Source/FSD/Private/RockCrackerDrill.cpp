#include "RockCrackerDrill.h"
#include "SingleUsableComponent.h"

ARockCrackerDrill::ARockCrackerDrill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConstructUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("ConstructUsable"));
}

void ARockCrackerDrill::SetIsDrilling(bool isDrilling) {
}

bool ARockCrackerDrill::GetIsDrilling() const {
    return false;
}


