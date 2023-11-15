#include "PlayerAfflictionOverlayWidget.h"

UPlayerAfflictionOverlayWidget::UPlayerAfflictionOverlayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bOverlayActive = false;
    this->Overlay = NULL;
}



void UPlayerAfflictionOverlayWidget::EndOverlay() {
}

void UPlayerAfflictionOverlayWidget::BeginOverlay(UPlayerAfflictionOverlay* InOverlay) {
}


