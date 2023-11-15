#include "CoolDownProgressWidget.h"

UCoolDownProgressWidget::UCoolDownProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFinished = false;
}

void UCoolDownProgressWidget::UpdateProgress(float Progress) {
}



void UCoolDownProgressWidget::Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle) {
}


