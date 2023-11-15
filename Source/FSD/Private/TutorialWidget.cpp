#include "TutorialWidget.h"

UTutorialWidget::UTutorialWidget() {
    this->RemainingVisibleTime = 0.00f;
}

void UTutorialWidget::Show(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration) {
}



void UTutorialWidget::Hide(bool watched) {
}

void UTutorialWidget::ChangeHintDuration(float NewDuration) {
}


