#include "BaseCritterDescriptor.h"

UBaseCritterDescriptor::UBaseCritterDescriptor() {
    this->Positioning = NULL;
    this->PathfinderType = DeepPathFinderType::Walk;
}

