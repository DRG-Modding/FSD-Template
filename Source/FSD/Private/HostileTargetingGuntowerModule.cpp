#include "HostileTargetingGuntowerModule.h"
#include "Net/UnrealNetwork.h"

AHostileTargetingGuntowerModule::AHostileTargetingGuntowerModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurretRotationSpeed = 0.00f;
    this->TargetedActor = NULL;
    this->TargetingRotationSpeed = 3.00f;
    this->TimeUntilForgetTarget = 3.00f;
    this->AlwaysUpdateAimRotation = true;
}

void AHostileTargetingGuntowerModule::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}

void AHostileTargetingGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHostileTargetingGuntowerModule, TargetedActor);
}


