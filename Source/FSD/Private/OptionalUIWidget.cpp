#include "OptionalUIWidget.h"

void UOptionalUIWidget::OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible) {
}

UOptionalUIWidget::UOptionalUIWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Category = NULL;
    this->VisibleFlag = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenFlag = ESlateVisibility::Collapsed;
}

