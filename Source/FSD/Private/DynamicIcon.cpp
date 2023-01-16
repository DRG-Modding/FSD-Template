#include "DynamicIcon.h"

class UObject;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UMaterialInterface* UDynamicIcon::GetIconMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicIcon::GenerateIconMaterial(UObject* materialOwner) const {
    return NULL;
}

UDynamicIcon::UDynamicIcon() {
}

