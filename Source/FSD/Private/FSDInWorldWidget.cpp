#include "FSDInWorldWidget.h"


void UFSDInWorldWidget::CallbackHUDVisibilityChanged(bool InHudVisible) {
}

UFSDInWorldWidget::UFSDInWorldWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHUDVisibile = true;
}

