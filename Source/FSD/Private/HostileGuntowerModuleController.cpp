#include "HostileGuntowerModuleController.h"
#include "Perception/AIPerceptionComponent.h"

AHostileGuntowerModuleController::AHostileGuntowerModuleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
}

void AHostileGuntowerModuleController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}


