#include "TutorialComponent.h"

class ATutorialManager;

void UTutorialComponent::RegisterTutorial() {
}




void UTutorialComponent::OnTutorialsReset() {
}

void UTutorialComponent::OnManagerReady(ATutorialManager* Manager) {
}

void UTutorialComponent::MarkTutorialWatched() {
}

void UTutorialComponent::MarkTutorialReadyNow() {
}

void UTutorialComponent::MarkTutorialReadyInSeconds(float Delay) {
}

bool UTutorialComponent::HasTutorialBeenShown() {
    return false;
}

FString UTutorialComponent::GetTutorialName_Implementation() const {
    return TEXT("");
}

void UTutorialComponent::CancelTutorial(bool CountAsViewed) {
}

UTutorialComponent::UTutorialComponent() {
    this->bTutorialEnabled = true;
    this->Priority = 0;
    this->MaxDuration = 10.00f;
    this->MaxViewCount = 1;
    this->ShowInTutorialLevel = false;
    this->bAutoRegisterWithManager = true;
    this->bDebugAlwaysShow = false;
    this->ManuallyMarkViews = false;
    this->bTutorialInitialized = false;
    this->bTutorialReady = false;
    this->bTutorialVisible = false;
    this->bTutorialActive = false;
}

