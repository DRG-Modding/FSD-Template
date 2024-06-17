#include "DetailedTag.h"

UDetailedTag::UDetailedTag() {
    this->TagIcon = NULL;
    this->SortingPriority = 0;
}

FText UDetailedTag::GetTagName() const {
    return FText::GetEmpty();
}

UTexture2D* UDetailedTag::GetTagIcon() const {
    return NULL;
}

FLinearColor UDetailedTag::GetTagColor() const {
    return FLinearColor{};
}

UDetailedTagCategory* UDetailedTag::GetTagCategory() const {
    return NULL;
}


