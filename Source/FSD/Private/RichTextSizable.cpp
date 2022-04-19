#include "RichTextSizable.h"

void URichTextSizable::SetDefaultFontSize(int32 inFontSize) {
}

void URichTextSizable::SetDefaultFontColor(const FLinearColor& InColor) {
}

URichTextSizable::URichTextSizable() : URichTextBlock(FObjectInitializer::Get()) {
    this->bOverrideDefaultSize = true;
    this->OverrideDefaultFontSize = 12;
    this->bOverrideDefaultColor = false;
}

