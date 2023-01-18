#include "PickaxeMaterialPart.h"

class UMaterialInstanceDynamic;
class UObject;

UMaterialInstanceDynamic* UPickaxeMaterialPart::CreateIcon(UObject* Owner) const {
    return NULL;
}

UPickaxeMaterialPart::UPickaxeMaterialPart() {
    this->DynamicIcon = NULL;
}

