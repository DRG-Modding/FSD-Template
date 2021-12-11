#include "PillarGenerationComponent.h"

UPillarGenerationComponent::UPillarGenerationComponent() {
    this->Points.AddDefaulted(2);
    this->Visible = true;
    this->PillarSettings = NULL;
}

