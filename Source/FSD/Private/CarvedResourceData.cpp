#include "CarvedResourceData.h"

UCarvedResourceCreator* UCarvedResourceData::LoadResourceCreator() const {
    return NULL;
}

float UCarvedResourceData::GetUnitsPerCarver() const {
    return 0.0f;
}

float UCarvedResourceData::GetTargetAmount(AProceduralSetup* pls) const {
    return 0.0f;
}

UCarvedResourceData::UCarvedResourceData() {
    this->UnitsPerCarver = 10.00f;
}

