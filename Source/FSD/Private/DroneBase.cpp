#include "DroneBase.h"
#include "Components/PointLightComponent.h"
#include "Net/UnrealNetwork.h"

void ADroneBase::OnRep_CurrentState(EDroneState Previous) {
}

void ADroneBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroneBase, CurrentState);
}

ADroneBase::ADroneBase() {
    this->StateLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("StateLight"));
    this->DefaultState = EDroneState::EFollow;
    this->CurrentState = EDroneState::EFollow;
}

