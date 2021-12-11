#include "ActivitySubSystem.h"

class APlayerState;
class UGameActivityType;

void UActivitySubSystem::StartActivity(const APlayerState* PlayerState, const UGameActivityType* activity) {
}

void UActivitySubSystem::ShowPlayerReviewUI(bool ReviewActiveMatch) {
}

bool UActivitySubSystem::PlayerReviewUIAvailable(bool ReviewActiveMatch) {
    return false;
}

void UActivitySubSystem::EndActivity(const APlayerState* PlayerState, const UGameActivityType* activity) {
}

UActivitySubSystem::UActivitySubSystem() {
}

