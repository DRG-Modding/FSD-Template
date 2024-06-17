#include "DetailedTagCategory.h"

UDetailedTagCategory::UDetailedTagCategory() {
    this->CategoryIcon = NULL;
}

FText UDetailedTagCategory::GetCategoryName() const {
    return FText::GetEmpty();
}

UTexture2D* UDetailedTagCategory::GetCategoryIcon() const {
    return NULL;
}

FLinearColor UDetailedTagCategory::GetCategoryColor() const {
    return FLinearColor{};
}


