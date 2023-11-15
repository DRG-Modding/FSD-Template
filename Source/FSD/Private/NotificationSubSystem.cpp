#include "NotificationSubSystem.h"

UNotificationSubSystem::UNotificationSubSystem() {
    this->CampaignNotification = NULL;
}

bool UNotificationSubSystem::GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification) {
    return false;
}

void UNotificationSubSystem::ClearCampaignNotifications() {
}

void UNotificationSubSystem::AddSpaceRigNotification(FSpaceRigNotification NewNotification, const FString& ID, bool TriggerEvent) {
}


