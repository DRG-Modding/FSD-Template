#include "ShoutWidget.h"


FString UShoutWidget::GetTimeString(int32 Seconds) {
    return TEXT("");
}

void UShoutWidget::GetSplitTimeString(int32 Seconds, FString& MinutesString, FString& SecondsString) {
}

FString UShoutWidget::GetCountDownString(int32 Seconds) const {
    return TEXT("");
}

UShoutWidget::UShoutWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Duration = 0.00f;
    this->IsSubtitle = false;
}

