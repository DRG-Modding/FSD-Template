#include "CrosshairAggregator.h"

UCrosshairAggregator::UCrosshairAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrosshairWidget = NULL;
    this->CrossHairType = NULL;
    this->CustomAmmoCounterWidget = NULL;
    this->AdditionalAmmoCounterWidget = NULL;
    this->CustomAmmoCounterType = NULL;
    this->AdditionalAmmoCounterType = NULL;
}

void UCrosshairAggregator::SetCrosshair(UUserWidget* Widget) {
}

UUserWidget* UCrosshairAggregator::GetOrCreateCrosshair() {
    return NULL;
}

UCustomAmmoCountWidget* UCrosshairAggregator::GetCustomAmmoCounterWidget(UObject* WorldContext, const APlayerController* InOwner) {
    return NULL;
}

UCustomAmmoCountWidget* UCrosshairAggregator::GetAdditionalAmmoCounterWidget(UObject* WorldContext, const APlayerController* InOwner) {
    return NULL;
}


