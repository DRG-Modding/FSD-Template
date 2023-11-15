#include "CrosshairAggregator.h"

UCrosshairAggregator::UCrosshairAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrosshairWidget = NULL;
    this->CrossHairType = NULL;
    this->CustomAmmoCounterWidget = NULL;
    this->CustomAmmoCounterType = NULL;
}

void UCrosshairAggregator::SetCrosshair(UUserWidget* Widget) {
}

UUserWidget* UCrosshairAggregator::GetOrCreateCrosshair() {
    return NULL;
}

UCustomAmmoCountWidget* UCrosshairAggregator::GetCustomAmmoCounterWidget(UObject* WorldContext, APlayerController* InOwner) {
    return NULL;
}


