#include "ButtonWidget.h"

UButtonWidget::UButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bButtonEnabled = true;
    this->bButtonSelected = false;
    this->bButtonHovered = false;
    this->InnerButton = NULL;
    this->AnimButtonHover = NULL;
}

void UButtonWidget::Unhovered() {
}

bool UButtonWidget::ToggleButtonSelected() {
    return false;
}

void UButtonWidget::SetButtonSelected(bool InSelected) {
}

void UButtonWidget::SetButtonEnabled(bool InEnabled) {
}

void UButtonWidget::SetButtonData(const FButtonData& InData) {
}







void UButtonWidget::Hovered() {
}

void UButtonWidget::Click() {
}

void UButtonWidget::ClearEventBindings() {
}


