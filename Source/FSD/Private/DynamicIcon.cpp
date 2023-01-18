#include "DynamicIcon.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;

UMaterialInterface* UDynamicIcon::GetIconMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicIcon::GenerateIconMaterial(UObject* materialOwner) const {
    return NULL;
}

UDynamicIcon::UDynamicIcon() {
}

