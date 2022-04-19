#include "ActivitySubSystem.h"

class APlayerState;
class UGameActivityType;

void UActivitySubSystem::StartActivity(const APlayerState* PlayerState, const UGameActivityType* Activity) {
}

void UActivitySubSystem::ShowPlayerReviewUI(bool ReviewActiveMatch) {
}

bool UActivitySubSystem::PlayerReviewUIAvailable(bool ReviewActiveMatch) {
    return false;
}

void UActivitySubSystem::EndActivity(const APlayerState* PlayerState, const UGameActivityType* Activity) {
}

UActivitySubSystem::UActivitySubSystem() {
}

