#include "PlayerAfflictionOverlayWidget.h"

class UPlayerAfflictionOverlay;



void UPlayerAfflictionOverlayWidget::EndOverlay() {
}

void UPlayerAfflictionOverlayWidget::BeginOverlay(UPlayerAfflictionOverlay* InOverlay) {
}

UPlayerAfflictionOverlayWidget::UPlayerAfflictionOverlayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bOverlayActive = false;
    this->Overlay = NULL;
}

