#include "FSDInWorldWidget.h"

UFSDInWorldWidget::UFSDInWorldWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHUDVisibile = true;
}


void UFSDInWorldWidget::CallbackHUDVisibilityChanged(bool InHudVisible) {
}


