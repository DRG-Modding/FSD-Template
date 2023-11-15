#include "DynamicIcon.h"

UDynamicIcon::UDynamicIcon() {
}

UMaterialInterface* UDynamicIcon::GetIconMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicIcon::GenerateIconMaterial(UObject* materialOwner) const {
    return NULL;
}


