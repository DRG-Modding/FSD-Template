#include "DroneDisplayActionComponent.h"
#include "Components/TextRenderComponent.h"

void UDroneDisplayActionComponent::SetMode(EDroneActions droneAction) {
}

UDroneDisplayActionComponent::UDroneDisplayActionComponent() {
    this->DisplayText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
}

