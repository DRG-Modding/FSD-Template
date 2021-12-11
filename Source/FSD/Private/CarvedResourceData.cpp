#include "CarvedResourceData.h"

class UCarvedResourceCreator;

UCarvedResourceCreator* UCarvedResourceData::LoadResourceCreator() const {
    return NULL;
}

UCarvedResourceData::UCarvedResourceData() {
    this->UnitsPerCarver = 10.00f;
}

