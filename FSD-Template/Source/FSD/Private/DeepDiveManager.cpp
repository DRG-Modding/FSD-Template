#include "DeepDiveManager.h"

class UDeepDive;
class UGeneratedMission;

void UDeepDiveManager::StartDeepDive(UDeepDive* DeepDive) {
}

void UDeepDiveManager::ReInitialize() {
}

void UDeepDiveManager::MarkGivenRewards() {
}

bool UDeepDiveManager::IsEliteDeepDive(UGeneratedMission* mission) const {
    return false;
}

UDeepDive* UDeepDiveManager::GetDeepDiveFromMission(UGeneratedMission* mission) const {
    return NULL;
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
    this->ActiveNormalDeepDive = NULL;
    this->ActiveHardDeepDive = NULL;
    this->ActiveDeepDive = NULL;
    this->CurrentMission = NULL;
    this->currentDepth = 0.00f;
    this->NumFailedRequests = 0;
    this->BackendDataValid = 0;
    this->BackendSeed = -1;
    this->LockSeed = false;
}

