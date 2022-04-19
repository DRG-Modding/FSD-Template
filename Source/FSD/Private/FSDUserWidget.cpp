#include "FSDUserWidget.h"

class AFSDPlayerState;
class AItem;

void UFSDUserWidget::SetOpacity(float alpha) {
}

void UFSDUserWidget::ScaleByBaseResolution() {
}

void UFSDUserWidget::Refresh() {
}




bool UFSDUserWidget::HasCharacter() {
    return false;
}

float UFSDUserWidget::GetOpacity() const {
    return 0.0f;
}

AFSDPlayerState* UFSDUserWidget::GetFSDPlayerState() {
    return NULL;
}

AItem* UFSDUserWidget::GetEquippedItem() const {
    return NULL;
}

float UFSDUserWidget::GetBaseResolutionScale() const {
    return 0.0f;
}


UFSDUserWidget::UFSDUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Character = NULL;
}

