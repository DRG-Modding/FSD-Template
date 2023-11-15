#include "ShowroomManager.h"

UShowroomManager::UShowroomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentStage = NULL;
    this->StageInstance = NULL;
    this->RenderTarget = NULL;
}

UShowroomController* UShowroomManager::GetController() {
    return NULL;
}

void UShowroomManager::ClearShowroom() {
}


