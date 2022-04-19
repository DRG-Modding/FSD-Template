#include "ActorTrackingComponent.h"

void UActorTrackingComponent::ToggleIcon(bool Visible) {
}

void UActorTrackingComponent::ShowAlwaysOn() {
}

void UActorTrackingComponent::OnHoldTAB(bool IsDown) {
}

bool UActorTrackingComponent::IsIconVisible() const {
    return false;
}

UActorTrackingComponent::UActorTrackingComponent() {
    this->WidgetType = NULL;
    this->VisibleOnHoldTAB = true;
    this->VisibleFromStart = false;
    this->bIconHidden = false;
}

