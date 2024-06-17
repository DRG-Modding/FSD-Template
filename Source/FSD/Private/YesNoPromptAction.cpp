#include "YesNoPromptAction.h"

UYesNoPromptAction::UYesNoPromptAction() {
}

UYesNoPromptAction* UYesNoPromptAction::PromptYesNoWidget(UObject* WorldContext, UYesNoPromptWidget* InPromptWidget, FText InTitle, FText InMessage) {
    return NULL;
}

UYesNoPromptAction* UYesNoPromptAction::PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt) {
    return NULL;
}

UYesNoPromptAction* UYesNoPromptAction::PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources) {
    return NULL;
}

void UYesNoPromptAction::PromptCallback(bool YesClicked) {
}


