#include "MouseCursorWidget.h"

UMouseCursorWidget::UMouseCursorWidget() {
    this->TargetInput = EFSDInputSource::None;
    this->bIsHovering = false;
}


void UMouseCursorWidget::OnInputSourceChanged(EFSDInputSource Source) {
}



