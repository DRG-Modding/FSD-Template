#include "Drillevator.h"
#include "Net/UnrealNetwork.h"

ADrillevator::ADrillevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->State = EDrillevatorState::Deactivated;
    this->MovementEnabled = false;
    this->TargetDepth = 0.00f;
    this->MovementSpeed = 0.00f;
    this->ServerDepth = 0.00f;
    this->HeatMaterialSlot = TEXT("HeatMaterial");
    this->HeatParamName = TEXT("Overheat - Phase (0-1)");
    this->CenterEngineHeatWeight = 2.00f;
    this->CenterEngineMaxHeat = 0.20f;
    this->DynMatCenterEngineHeat = NULL;
}

void ADrillevator::SetTargetDepth(float Depth) {
}

void ADrillevator::SetState(EDrillevatorState NewState) {
}

void ADrillevator::SetMovementSpeed(float NewSpeed) {
}

void ADrillevator::SetMovementEnabled(bool Enabled) {
}

void ADrillevator::OnRep_State(EDrillevatorState oldState) {
}

void ADrillevator::OnRep_ServerDepth() {
}

void ADrillevator::OnRep_MovementEnabled(bool OldMovementEnabled) {
}




bool ADrillevator::IsAtTargetDepth() const {
    return false;
}

USkeletalMeshComponent* ADrillevator::GetCenterEngineComponent_Implementation() const {
    return NULL;
}

void ADrillevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrillevator, State);
    DOREPLIFETIME(ADrillevator, MovementEnabled);
    DOREPLIFETIME(ADrillevator, TargetDepth);
    DOREPLIFETIME(ADrillevator, MovementSpeed);
    DOREPLIFETIME(ADrillevator, ServerDepth);
}


