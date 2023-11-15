#include "PickaxeMaterialPart.h"

UPickaxeMaterialPart::UPickaxeMaterialPart() {
    this->DynamicIcon = NULL;
}

UMaterialInstanceDynamic* UPickaxeMaterialPart::CreateIcon(UObject* Owner) const {
    return NULL;
}


