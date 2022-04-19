#include "WindowWidget.h"






bool UWindowWidget::ReceiveCanCloseWindow_Implementation(FName InActionName, FKey InKey, bool InIsMouseEvent) {
    return false;
}




void UWindowWidget::ConsumeCommand() {
}

void UWindowWidget::CloseThisWindow() {
}

UWindowWidget::UWindowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHandleCloseCommand = true;
    this->bResolutionDownscaleWhenOpen = false;
}

