#include "PlayerCharacterData.h"

class UTexture2D;

FText UPlayerCharacterData::GetSwitchToMessage() const {
    return FText::GetEmpty();
}

UTexture2D* UPlayerCharacterData::GetSmallIcon() const {
    return NULL;
}

FText UPlayerCharacterData::GetShortDescription() const {
    return FText::GetEmpty();
}

FText UPlayerCharacterData::GetName() const {
    return FText::GetEmpty();
}

FText UPlayerCharacterData::GetLongDescription() const {
    return FText::GetEmpty();
}

UTexture2D* UPlayerCharacterData::GetIcon() const {
    return NULL;
}

UTexture2D* UPlayerCharacterData::GetFullSizeImage() const {
    return NULL;
}

FLinearColor UPlayerCharacterData::GetColor() const {
    return FLinearColor{};
}

UPlayerCharacterData::UPlayerCharacterData() {
    this->characterID = NULL;
}

