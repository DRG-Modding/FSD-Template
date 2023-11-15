#include "YesNoPromptWidget.h"

UYesNoPromptWidget::UYesNoPromptWidget() {
    this->bDestroyOnClick = false;
    this->bCloseAllWindows = true;
}

void UYesNoPromptWidget::Show(FText Title, FText Message, const UYesNoPromptWidget::FOnYesNoClickedDelegate& OnYesNoClicked) {
}




void UYesNoPromptWidget::Clicked(bool YesClicked) {
}


