#include "FSDWidgetEffectsComponent.h"

class UUserWidget;
class UObject;
class UTextBlock;
class UWidget;

void UFSDWidgetEffectsComponent::StartTextCounter(UObject* WorldContext, UTextBlock*& Widget, float Start, float End, float Duration, int32 MaxDigits, float StartDelay) {
}

void UFSDWidgetEffectsComponent::StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float Duration, const FCustomCounterDelegate& OnCount, float StartDelay) {
}

void UFSDWidgetEffectsComponent::PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float Duration, EPingType PingType, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, EMoveType MoveType, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay) {
}

void UFSDWidgetEffectsComponent::FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay) {
}

UFSDWidgetEffectsComponent::UFSDWidgetEffectsComponent() {
}

