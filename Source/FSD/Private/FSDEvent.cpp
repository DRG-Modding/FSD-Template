#include "FSDEvent.h"

class UObject;
class UFSDEvent;
class APlayerController;
class UTexture2D;

void UFSDEvent::MarkClaimableRewardsSeen(UObject* WorldContext) {
}

bool UFSDEvent::IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent) {
    return false;
}

bool UFSDEvent::HasUnseenClaimableRewards(UObject* WorldContext) {
    return false;
}

bool UFSDEvent::GiveRewards(APlayerController* PlayerController) {
    return false;
}

UTexture2D* UFSDEvent::GetTitleScreenOverride() {
    return NULL;
}

bool UFSDEvent::GetIsActive(UObject* WorldContext) const {
    return false;
}

UFSDEvent::UFSDEvent() {
    this->bHasClaimableRewards = false;
    this->bFreeBeerEvent = false;
}

