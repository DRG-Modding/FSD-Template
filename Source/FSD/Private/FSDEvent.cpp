#include "FSDEvent.h"

class UObject;
class UFSDEvent;
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

bool UFSDEvent::GetIsActive(UObject* WorldContext) const {
    return false;
}

UFSDEvent::UFSDEvent() {
    this->bHasClaimableRewards = false;
    this->bFreeBeerEvent = false;
}

