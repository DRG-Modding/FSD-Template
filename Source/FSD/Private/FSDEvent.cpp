#include "FSDEvent.h"

class UTexture2D;
class UFSDEvent;
class UObject;
class APlayerController;

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

