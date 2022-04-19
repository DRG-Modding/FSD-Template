#include "DeepDiveManager.h"
#include "FSDEventsHandler.h"

class UDeepDive;
class UGeneratedMission;

void UDeepDiveManager::StartDeepDive(UDeepDive* DeepDive) {
}

void UDeepDiveManager::ReInitialize() {
}

void UDeepDiveManager::MarkGivenRewards() {
}

UGeneratedMission* UDeepDiveManager::GetCurrentSingleMission() const {
    return NULL;
}

int32 UDeepDiveManager::GetCurrentDeepDiveStage() const {
    return 0;
}

UDeepDive* UDeepDiveManager::GetActiveNormalDeepDive() const {
    return NULL;
}

UDeepDive* UDeepDiveManager::GetActiveHardDeepDive() const {
    return NULL;
}

UDeepDive* UDeepDiveManager::GetActiveDeepDive() const {
    return NULL;
}

bool UDeepDiveManager::CompleteCurrentSingleMission() {
    return false;
}

bool UDeepDiveManager::AreAllSelectedClassesQualified() const {
    return false;
}

UDeepDiveManager::UDeepDiveManager() {
    this->LockSeed = false;
    this->EventsHandler = CreateDefaultSubobject<UFSDEventsHandler>(TEXT("EventsHandler"));
    this->ActiveNormalDeepDive = NULL;
    this->ActiveHardDeepDive = NULL;
    this->ActiveDeepDive = NULL;
    this->CurrentMission = NULL;
    this->currentDepth = 0.00f;
    this->BackendDataValid = 0;
    this->BackendSeed = -1;
}

