#include "RichTextInputWidget.h"

class UTextBlock;

void URichTextInputWidget::ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight) {
}



void URichTextInputWidget::OnInputSourceChanged(EFSDInputSource InSource) {
}

void URichTextInputWidget::OnCustomKeyBindsChanged() {
}

FVector2D URichTextInputWidget::MeasureTextSize(const FText& Text, float Scale) const {
    return FVector2D{};
}

float URichTextInputWidget::GetLineHeight() const {
    return 0.0f;
}

void URichTextInputWidget::ApplyTextStyle(UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle) {
}

URichTextInputWidget::URichTextInputWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputSource = EFSDInputSource::None;
    this->RichTextBlock = NULL;
}

