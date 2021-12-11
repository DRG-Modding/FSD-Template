#include "DroneUseComponent.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

void UDroneUseComponent::SyncedUsableUserCountChangedResponse(int32 userCount) {
}

void UDroneUseComponent::SyncedUsableUsedResponse(APlayerCharacter* User, EInputKeys Key) {
}

void UDroneUseComponent::SyncedUsableBeginUseResponse(APlayerCharacter* User, EInputKeys Key) {
}

void UDroneUseComponent::SetUseDuration(float NewUseDuration) {
}

void UDroneUseComponent::SetCanUse(bool NewCanUse) {
}

float UDroneUseComponent::GetProgress() const {
    return 0.0f;
}

void UDroneUseComponent::EndUse() {
}

void UDroneUseComponent::BeginUse() {
}

void UDroneUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDroneUseComponent, Progress);
}

UDroneUseComponent::UDroneUseComponent() {
    this->BoscoLaserpointerShout = NULL;
    this->Progress = 0.00f;
    this->useDuration = 0.00f;
    this->ResetOnFail = false;
    this->CanUse = false;
}

