#include "YesNoPromptWidget.h"

void UYesNoPromptWidget::Show(FText Title, FText Message, const UYesNoPromptWidget::FOnYesNoClickedDelegate& OnYesNoClicked) {
}




void UYesNoPromptWidget::Clicked(bool YesClicked) {
}

UYesNoPromptWidget::UYesNoPromptWidget() {
    this->bDestroyOnClick = false;
    this->bCloseAllWindows = true;
}

