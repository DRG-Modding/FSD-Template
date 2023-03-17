#include "DynamicIcon.h"

UMaterialInterface* UDynamicIcon::GetIconMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicIcon::GenerateIconMaterial(UObject* materialOwner) const {
    return NULL;
}

UDynamicIcon::UDynamicIcon() {
}

