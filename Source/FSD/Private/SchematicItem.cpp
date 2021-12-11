#include "SchematicItem.h"

class UObject;
class UTexture;

FText USchematicItem::GetTitle() const {
    return FText::GetEmpty();
}

FColor USchematicItem::GetIconTint() const {
    return FColor{};
}

UTexture* USchematicItem::GetIcon(UObject* WorldContextObject) const {
    return NULL;
}

FText USchematicItem::GetDescription() const {
    return FText::GetEmpty();
}

USchematicItem::USchematicItem() {
}

