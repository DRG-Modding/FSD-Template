#include "HostileGuntowerModuleController.h"
#include "Perception/AIPerceptionComponent.h"

class AActor;

void AHostileGuntowerModuleController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}

AHostileGuntowerModuleController::AHostileGuntowerModuleController() {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
}

