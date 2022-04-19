#include "CompositeArmorItem.h"

FCompositeArmorItem::FCompositeArmorItem() {
    this->Component = NULL;
    this->Health = 0.00f;
    this->OverrideAffectedByArmorBreak = false;
    this->MyAffectedByAmorBreak = false;
}

