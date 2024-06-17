#include "PropHuntEndScreenWidget.h"

UPropHuntEndScreenWidget::UPropHuntEndScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EndScreenType = EPropHuntEndScreen::HuntersWin;
    this->GameWon = true;
}


