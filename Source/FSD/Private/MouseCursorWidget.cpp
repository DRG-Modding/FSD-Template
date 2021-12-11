#include "MouseCursorWidget.h"


void UMouseCursorWidget::OnInputSourceChanged(EFSDInputSource Source) {
}


UMouseCursorWidget::UMouseCursorWidget() {
    this->TargetInput = EFSDInputSource::None;
    this->bIsHovering = false;
}

