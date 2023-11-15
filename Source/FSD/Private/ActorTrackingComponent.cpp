#include "ActorTrackingComponent.h"

UActorTrackingComponent::UActorTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetType = NULL;
    this->VisibleOnHoldTAB = true;
    this->VisibleFromStart = false;
    this->bIconHidden = false;
}

void UActorTrackingComponent::ToggleIcon(bool Visible) {
}

void UActorTrackingComponent::ShowAlwaysOn() {
}

void UActorTrackingComponent::OnHoldTAB(bool IsDown) {
}

bool UActorTrackingComponent::IsIconVisible() const {
    return false;
}


