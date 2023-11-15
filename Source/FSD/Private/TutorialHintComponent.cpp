#include "TutorialHintComponent.h"

UTutorialHintComponent::UTutorialHintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTutorialHintComponent::SetRemainingVisibleTime(float remainingTime) {
}

bool UTutorialHintComponent::IsSingleplayer(UObject* WorldContext) const {
    return false;
}

void UTutorialHintComponent::ChangeHint(const FTutorialHint& NewHint) {
}


