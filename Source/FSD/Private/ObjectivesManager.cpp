#include "ObjectivesManager.h"

void UObjectivesManager::OnObjectiveChanged(UObjective* obj) {
}

bool UObjectivesManager::HasRequiredSecondaryObjective() const {
    return false;
}

UObjective* UObjectivesManager::GetSecondaryObjective() const {
    return NULL;
}

UObjective* UObjectivesManager::GetPrimaryObjective() const {
    return NULL;
}

void UObjectivesManager::ExitPodDescending() {
}

void UObjectivesManager::ExitPodArrived() {
}

void UObjectivesManager::DropPodExited() {
}

bool UObjectivesManager::AreRequiredSecondariesComplete() const {
    return false;
}

UObjectivesManager::UObjectivesManager() {
    this->Objective = NULL;
    this->ObjectivesInitialized = false;
    this->ObjectivesStarted = false;
    this->bCheatObjectivesCompleted = false;
}

