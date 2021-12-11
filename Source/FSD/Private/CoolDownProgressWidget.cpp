#include "CoolDownProgressWidget.h"

class UObject;

void UCoolDownProgressWidget::UpdateProgress(float Progress) {
}



void UCoolDownProgressWidget::Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle) {
}

UCoolDownProgressWidget::UCoolDownProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFinished = false;
}

