#include "TrackMovementStateComponent.h"
#include "Net/UnrealNetwork.h"

void UTrackMovementStateComponent::ServerExitMode_Implementation(EExitTrackMode eMode) {
}
bool UTrackMovementStateComponent::ServerExitMode_Validate(EExitTrackMode eMode) {
    return true;
}

void UTrackMovementStateComponent::ServerAddTemporaryAcceration_Implementation(float Acceleration, float Duration) {
}
bool UTrackMovementStateComponent::ServerAddTemporaryAcceration_Validate(float Acceleration, float Duration) {
    return true;
}

void UTrackMovementStateComponent::OnRep_TrackMovementdata(FPipelineMovementData& oldState) {
}

void UTrackMovementStateComponent::JumpPressed() {
}

void UTrackMovementStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTrackMovementStateComponent, TrackMovementData);
}

UTrackMovementStateComponent::UTrackMovementStateComponent() {
    this->AudioStartComponent = NULL;
    this->AudioDuringComponent = NULL;
    this->AudioStopComponent = NULL;
    this->AudioOnStart = NULL;
    this->AudioOnDuring = NULL;
    this->AudioOnStop = NULL;
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

