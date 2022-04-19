#include "TutorialWidget.h"

class UTexture2D;

void UTutorialWidget::Show(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration) {
}



void UTutorialWidget::Hide(bool watched) {
}

void UTutorialWidget::ChangeHintDuration(float NewDuration) {
}

UTutorialWidget::UTutorialWidget() {
    this->RemainingVisibleTime = 0.00f;
}

