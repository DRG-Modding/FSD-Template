#include "ObjectivesManager.h"
#include "Templates/SubclassOf.h"

UObjectivesManager::UObjectivesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Objective = NULL;
    this->ObjectivesInitialized = false;
    this->ObjectivesStarted = false;
    this->bCheatObjectivesCompleted = false;
}

void UObjectivesManager::OnObjectiveChanged(UObjective* obj) {
}

bool UObjectivesManager::HasRequiredSecondaryObjective() const {
    return false;
}

TArray<UObjective*> UObjectivesManager::GetSecondaryObjectives() const {
    return TArray<UObjective*>();
}

UObjective* UObjectivesManager::GetSecondaryObjective() const {
    return NULL;
}

UObjective* UObjectivesManager::GetPrimaryObjective() const {
    return NULL;
}

UObjective* UObjectivesManager::FindSecondaryObjective(TSubclassOf<UObjective> objectiveClass) const {
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


