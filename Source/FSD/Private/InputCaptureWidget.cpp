#include "InputCaptureWidget.h"

void UInputCaptureWidget::SetData(const FCustomKeySetting InSettings, EKeyBindingSlot InInputSlot, bool InIsGamepadKey) {
}

void UInputCaptureWidget::SetCurrentBinding(const FKey& InKey) {
}




FKey UInputCaptureWidget::GetCurrentBinding() const {
    return FKey{};
}

bool UInputCaptureWidget::FindCurrentSettingsForKey(const FKey& InKey, FCustomKeySetting& OutSettings) {
    return false;
}

void UInputCaptureWidget::ClearCurrentBinding() {
}

void UInputCaptureWidget::BindActionToKey(const FCustomKeySetting& InAction, const FKey& InKey, EKeyBindingSlot InSlot, bool SaveToDisk) {
}

UInputCaptureWidget::UInputCaptureWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputSlot = EKeyBindingSlot::Primary;
    this->bIsGamepadKey = false;
    this->bCapturing = false;
}

