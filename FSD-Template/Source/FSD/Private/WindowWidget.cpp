#include "WindowWidget.h"









void UWindowWidget::ConsumeCommand() {
}

void UWindowWidget::CloseThisWindow() {
}

UWindowWidget::UWindowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHandleCloseCommand = true;
    this->bResolutionDownscaleWhenOpen = false;
}

