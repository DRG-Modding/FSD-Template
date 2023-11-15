#include "DroneVacuumStream.h"
#include "Components/SceneComponent.h"

ADroneVacuumStream::ADroneVacuumStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VacuumPoint = CreateDefaultSubobject<USceneComponent>(TEXT("VacuumSource"));
    this->VacuumPoint->SetupAttachment(RootComponent);
}

void ADroneVacuumStream::Server_StartVacuumingPuddle_Implementation(AFoamPuddle* puddle) {
}


