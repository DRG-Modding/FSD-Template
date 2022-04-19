#include "NotificationSubSystem.h"

bool UNotificationSubSystem::GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification) {
    return false;
}

void UNotificationSubSystem::ClearCampaignNotifications() {
}

void UNotificationSubSystem::AddSpaceRigNotification(FSpaceRigNotification NewNotification, const FString& ID, bool TriggerEvent) {
}

UNotificationSubSystem::UNotificationSubSystem() {
    this->CampaignNotification = NULL;
}

