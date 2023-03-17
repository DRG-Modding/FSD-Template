#include "ObjectiveWidget.h"

void UObjectiveWidget::SetText(const FText& InText, const FText& InCounterText, UTexture2D* InCounterIcon, bool InObjectiveCompleted) {
}

void UObjectiveWidget::SetSimpleText(const FText& InText, bool InObjectiveCompleted) {
}

void UObjectiveWidget::SetObjective(UObjective* InObjective, bool InIsPrimaryObjective) {
}



void UObjectiveWidget::OnObjectiveUpdated(UObjective* InObjective) {
}

UObjectiveWidget::UObjectiveWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MissionObjective = NULL;
    this->bIsPrimaryObjective = false;
    this->ObjectiveCounterIcon = NULL;
    this->bObjectiveCompleted = false;
}

