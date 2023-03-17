#include "HostileGuntowerModuleController.h"
#include "Perception/AIPerceptionComponent.h"

void AHostileGuntowerModuleController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}

AHostileGuntowerModuleController::AHostileGuntowerModuleController() {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
}

