#include "CrosshairAggregator.h"

void UCrosshairAggregator::SetCrosshair(UUserWidget* Widget) {
}

UUserWidget* UCrosshairAggregator::GetOrCreateCrosshair() {
    return NULL;
}

UCustomAmmoCountWidget* UCrosshairAggregator::GetCustomAmmoCounterWidget(UObject* WorldContext, APlayerController* InOwner) {
    return NULL;
}

UCrosshairAggregator::UCrosshairAggregator() {
    this->CrosshairWidget = NULL;
    this->CrossHairType = NULL;
    this->CustomAmmoCounterWidget = NULL;
    this->CustomAmmoCounterType = NULL;
}

