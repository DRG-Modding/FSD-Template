#include "TrackMovementStateComponent.h"
#include "Net/UnrealNetwork.h"

UTrackMovementStateComponent::UTrackMovementStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 16;
    this->AudioStartComponent = NULL;
    this->AudioDuringComponent = NULL;
    this->AudioStopComponent = NULL;
    this->AudioOnFadeOut = 0.10f;
    this->StateUpdateShout = NULL;
    this->StateUpdateShoutFrequencySecsMin = 5.00f;
    this->StateUpdateShoutFrequencySecsMax = 20.00f;
    this->AudioDuringSlidingSpeedParam = 0.00f;
    this->SpeedTarget = 500.00f;
    this->SpeedMin = 100.00f;
    this->SpeedMax = 1000.00f;
    this->AccelerationBase = 1000.00f;
    this->AccelerationMultiplier = 1.00f;
    this->DecelerationMultiplier = 0.35f;
    this->AccelerationOnSlopeMultiplier = 2.00f;
    this->DecelerationOnSlopeMultiplier = 1.30f;
    this->StoppingDeceleration = 4000.00f;
    this->StoppingDistance = 100.00f;
    this->Connector = NULL;
    this->ExitMode = EExitTrackMode::None;
}

void UTrackMovementStateComponent::ServerExitMode_Implementation(EExitTrackMode eMode) {
}

void UTrackMovementStateComponent::ServerAddTemporaryAcceration_Implementation(float Acceleration, float Duration) {
}

void UTrackMovementStateComponent::OnRep_TrackMovementdata(FPipelineMovementData& oldState) {
}

void UTrackMovementStateComponent::JumpPressed() {
}

void UTrackMovementStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTrackMovementStateComponent, TrackMovementData);
}


