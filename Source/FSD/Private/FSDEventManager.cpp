#include "FSDEventManager.h"

void UFSDEventManager::TryGetJettyBootSettings(bool& OutHasSettings, FJettyBootEventSettings& OutSettings) {
}

void UFSDEventManager::RequestSeasonEndTime(FOnRequestSeasonEndTimeComplete OnComplete) {
}

bool UFSDEventManager::IsEventTypeActive(const EHolidayType FSDEvent) const {
    return false;
}

bool UFSDEventManager::IsEventActive(const UFSDEvent* FSDEvent) const {
    return false;
}

bool UFSDEventManager::GetSeasonExpiryDate(FDateTime& ExpiryDate) {
    return false;
}

EHolidayType UFSDEventManager::GetHolidayType() const {
    return EHolidayType::None;
}

UFSDEvent* UFSDEventManager::GetFirstActiveEventHandler() const {
    return NULL;
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

