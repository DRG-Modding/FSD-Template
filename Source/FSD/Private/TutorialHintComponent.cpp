#include "TutorialHintComponent.h"

class UObject;

void UTutorialHintComponent::SetRemainingVisibleTime(float remainingTime) {
}

bool UTutorialHintComponent::IsSingleplayer(UObject* WorldContext) const {
    return false;
}

void UTutorialHintComponent::ChangeHint(const FTutorialHint& NewHint) {
}

UTutorialHintComponent::UTutorialHintComponent() {
}

