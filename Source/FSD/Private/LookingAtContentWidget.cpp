#include "LookingAtContentWidget.h"

ULookingAtContentWidget::ULookingAtContentWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bWeakPointHit = false;
}

void ULookingAtContentWidget::UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, const TScriptInterface<IHealth>& InTargetHealthComponent) {
}

void ULookingAtContentWidget::RegisterWeakPointHit() {
}



FText ULookingAtContentWidget::GetTargetOwnerName() const {
    return FText::GetEmpty();
}

FText ULookingAtContentWidget::GetTargetName() const {
    return FText::GetEmpty();
}

float ULookingAtContentWidget::GetTargetHealthPct() const {
    return 0.0f;
}


