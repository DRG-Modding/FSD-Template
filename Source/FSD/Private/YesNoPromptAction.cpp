#include "YesNoPromptAction.h"

class UObject;
class UYesNoPromptAction;
class UResourceData;

UYesNoPromptAction* UYesNoPromptAction::PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt) {
    return NULL;
}

UYesNoPromptAction* UYesNoPromptAction::PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources) {
    return NULL;
}

void UYesNoPromptAction::PromptCallback(bool YesClicked) {
}

UYesNoPromptAction::UYesNoPromptAction() {
}

