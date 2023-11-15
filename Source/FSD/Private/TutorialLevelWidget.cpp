#include "TutorialLevelWidget.h"
#include "Templates/SubclassOf.h"

UTutorialLevelWidget::UTutorialLevelWidget() {
    this->DelayBetweenTutorials = 2.00f;
}

void UTutorialLevelWidget::ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue) {
}

void UTutorialLevelWidget::RemoveTutorialWidget(UTutorialContentWidget* TutorialWidget) {
}

void UTutorialLevelWidget::RemoveAllTutorials() {
}

void UTutorialLevelWidget::OnTutorialFinished(UTutorialContentWidget* TutorialWidget) {
}



