#include "DynamicIcon.h"

class UMaterialInterface;
class UObject;
class UMaterialInstanceDynamic;

UMaterialInterface* UDynamicIcon::GetIconMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UDynamicIcon::GenerateIconMaterial(UObject* materialOwner) const {
    return NULL;
}

UDynamicIcon::UDynamicIcon() {
}

