#include "PickaxeMaterialPart.h"

UMaterialInstanceDynamic* UPickaxeMaterialPart::CreateIcon(UObject* Owner) const {
    return NULL;
}

UPickaxeMaterialPart::UPickaxeMaterialPart() {
    this->DynamicIcon = NULL;
}

