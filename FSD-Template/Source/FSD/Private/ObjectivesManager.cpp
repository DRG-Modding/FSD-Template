#include "ObjectivesManager.h"

class UObjective;

void UObjectivesManager::OnObjectiveChanged(UObjective* obj) {
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

UObjectivesManager::UObjectivesManager() {
    this->Objective = NULL;
    this->ObjectivesInitialized = false;
    this->ObjectivesStarted = false;
    this->bCheatObjectivesCompleted = false;
}

