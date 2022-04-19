#include "FSDEventManager.h"

class UFSDEvent;

bool UFSDEventManager::IsEventActive(const UFSDEvent* FSDEvent) const {
    return false;
}

bool UFSDEventManager::GetBackendNotificationEvent(FBackendNotificationEvent& Notification) {
    return false;
}

TArray<UFSDEvent*> UFSDEventManager::GetActiveEventHandlers() const {
    return TArray<UFSDEvent*>();
}

bool UFSDEventManager::FSDEventsReady() const {
    return false;
}

UFSDEventManager::UFSDEventManager() {
    this->NumFailedRequests = 0;
    this->BackendDataValid = false;
    this->NextCheckTime = 0.00f;
    this->SeasonExpirationTimeValid = false;
    this->BackendNotificationEventValid = false;
}

