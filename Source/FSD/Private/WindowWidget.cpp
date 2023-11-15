#include "WindowWidget.h"

UWindowWidget::UWindowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHandleCloseCommand = true;
    this->bResolutionDownscaleWhenOpen = false;
}






bool UWindowWidget::ReceiveCanCloseWindow_Implementation(FName InActionName, FKey InKey, bool InIsMouseEvent) {
    return false;
}




void UWindowWidget::ConsumeCommand() {
}

void UWindowWidget::CloseThisWindow() {
}


