#include "FSDEvent.h"

UFSDEvent::UFSDEvent() {
    this->EnableDangerousSaveGameIDEditing = false;
    this->EventThumbnail = NULL;
    this->EventType = EHolidayType::None;
    this->bFreeBeerEvent = false;
    this->bFreeBeerConfettiVisible = true;
    this->SpecialEventBeer = NULL;
    this->SeasonEndScreenImage = NULL;
    this->UseDifferentBarLightColor = false;
    this->bIsEventDebrisInDeepDives = true;
    this->bHasClaimableRewards = false;
}

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

UFSDEventPopupWidget* UFSDEvent::CreatePopupWindow(APlayerController* InPlayerController) {
    return NULL;
}


