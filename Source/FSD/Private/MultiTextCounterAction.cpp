#include "MultiTextCounterAction.h"

UMultiTextCounterAction* UMultiTextCounterAction::StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries) {
    return NULL;
}

UMultiTextCounterAction::UMultiTextCounterAction() {
    this->TotalBlock = NULL;
    this->CountSpeed = 0.00f;
    this->CountingSound = NULL;
    this->AudioComponent = NULL;
    this->WorldContext = NULL;
}

