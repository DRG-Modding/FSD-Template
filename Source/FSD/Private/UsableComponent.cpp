#include "UsableComponent.h"

void UUsableComponent::SetUseText(const FText& NewText) {
}

bool UUsableComponent::HasDuration() const {
    return false;
}

UUsableComponent::UUsableComponent() {
    this->ShoutBegin = NULL;
    this->ResetOnFail = false;
    this->SwitchToUsingState = true;
}

