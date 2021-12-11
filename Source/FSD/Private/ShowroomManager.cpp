#include "ShowroomManager.h"

class UShowroomController;

UShowroomController* UShowroomManager::GetController() {
    return NULL;
}

void UShowroomManager::ClearShowroom() {
}

UShowroomManager::UShowroomManager() {
    this->CurrentStage = NULL;
    this->StageInstance = NULL;
    this->RenderTarget = NULL;
}

