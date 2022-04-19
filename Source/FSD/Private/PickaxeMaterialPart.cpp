#include "PickaxeMaterialPart.h"

class UObject;
class UMaterialInstanceDynamic;

UMaterialInstanceDynamic* UPickaxeMaterialPart::CreateIcon(UObject* Owner) const {
    return NULL;
}

UPickaxeMaterialPart::UPickaxeMaterialPart() {
    this->DynamicIcon = NULL;
}

