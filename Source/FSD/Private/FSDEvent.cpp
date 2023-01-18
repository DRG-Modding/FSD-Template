#include "FSDEvent.h"

class APlayerController;
class UFSDEvent;
class UObject;
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
    this->EventType = EHolidayType::None;
    this->bHasClaimableRewards = false;
    this->bFreeBeerEvent = false;
    this->bFreeBeerConfettiVisible = true;
    this->SpecialEventBeer = NULL;
    this->SeasonEndScreenImage = NULL;
    this->UseDifferentBarLightColor = false;
    this->bIsEventDebrisInDeepDives = true;
}

