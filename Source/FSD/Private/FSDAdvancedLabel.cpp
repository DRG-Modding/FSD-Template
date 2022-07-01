#include "FSDAdvancedLabel.h"

class UTextBlock;
class UHorizontalBox;
class UTexture2D;
class UImage;

void UFSDAdvancedLabel::SetText(FText NewText, FText OverrideControllerText) {
}

void UFSDAdvancedLabel::SetAlwaysShowAs(EFSDInputSource InPreferredSource) {
}

void UFSDAdvancedLabel::Refresh() {
}



void UFSDAdvancedLabel::OnLanguageChanged(const FString& NewCulture) {
}

void UFSDAdvancedLabel::OnInputSourceChanged(EFSDInputSource Source) {
}




FText UFSDAdvancedLabel::GetText() {
    return FText::GetEmpty();
}

bool UFSDAdvancedLabel::GetIsDesignTime() const {
    return false;
}

EFSDInputSource UFSDAdvancedLabel::GetCurrentInputSource() const {
    return EFSDInputSource::None;
}

UTextBlock* UFSDAdvancedLabel::CreateTextBlock(const FString& Text, FSlateFontInfo InFontInfo, FLinearColor Color) {
    return NULL;
}

UImage* UFSDAdvancedLabel::CreateImageSized(UTexture2D* Texture, int32 Width, int32 Height) {
    return NULL;
}

UImage* UFSDAdvancedLabel::CreateImage(UTexture2D* Texture, bool MatchSize) {
    return NULL;
}

UHorizontalBox* UFSDAdvancedLabel::CreateHorizontalBox() {
    return NULL;
}

UFSDAdvancedLabel::UFSDAdvancedLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->UpperCase = false;
    this->PreviewAs = EFSDInputSource::None;
}

