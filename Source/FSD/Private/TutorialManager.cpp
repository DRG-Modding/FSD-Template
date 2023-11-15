#include "TutorialManager.h"

ATutorialManager::ATutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumTimeBetweenTutorials = 5.00f;
    this->ResetTutorialsOnStart = false;
    this->ShowTutorialsDebug = false;
}


