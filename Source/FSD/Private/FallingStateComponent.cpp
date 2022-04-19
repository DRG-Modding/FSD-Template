#include "FallingStateComponent.h"
#include "Net/UnrealNetwork.h"


void UFallingStateComponent::Server_TakeFallDamage_Implementation(float Amount) {
}
bool UFallingStateComponent::Server_TakeFallDamage_Validate(float Amount) {
    return true;
}

void UFallingStateComponent::Server_SetJumpPressed_Implementation(bool Pressed) {
}
bool UFallingStateComponent::Server_SetJumpPressed_Validate(bool Pressed) {
    return true;
}

void UFallingStateComponent::Server_SetHoverBootsPressed_Implementation(bool IsPressed) {
}
bool UFallingStateComponent::Server_SetHoverBootsPressed_Validate(bool IsPressed) {
    return true;
}

void UFallingStateComponent::Server_SetFallVelocity_Implementation(float Velocity) {
}
bool UFallingStateComponent::Server_SetFallVelocity_Validate(float Velocity) {
    return true;
}

void UFallingStateComponent::Server_ClimbLedge_Implementation(bool shouldPlayAnimation) {
}
bool UFallingStateComponent::Server_ClimbLedge_Validate(bool shouldPlayAnimation) {
    return true;
}

void UFallingStateComponent::Server_ActivateJumpBoots_Implementation() {
}
bool UFallingStateComponent::Server_ActivateJumpBoots_Validate() {
    return true;
}



void UFallingStateComponent::OnRep_HoverBootsActive() {
}

void UFallingStateComponent::JumpReleased() {
}

void UFallingStateComponent::JumpPressed() {
}

void UFallingStateComponent::HoverBootsReleased() {
}

void UFallingStateComponent::HoverBootsPressed() {
}

void UFallingStateComponent::All_ShowJumpBootsActivation_Implementation() {
}

void UFallingStateComponent::All_ShowClimbLedge_Implementation() {
}

void UFallingStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFallingStateComponent, bHoverBootsActive);
}

UFallingStateComponent::UFallingStateComponent() {
    this->FallDamageStartVelocity = 1000.00f;
    this->FallDamageModifier = 0.10f;
    this->AutoClimbMinDelay = 1.00f;
    this->AutoClimbLookForwardDistance = 0.00f;
    this->MaxClimbHeight = 0.00f;
    this->MinClimbHeight = 0.00f;
    this->CapsuleCheckZOffset = 0.00f;
    this->MinInputDotProduct = 0.00f;
    this->JumpZVelocity = 0.00f;
    this->DebugAutoClimb = false;
    this->FallingShout = NULL;
    this->ShoutAfterDistance = 500.00f;
    this->ClimbUseSettings = NULL;
    this->HoverBootAirFriction = 5.00f;
    this->HoverBootAirControl = 0.00f;
    this->HoverBootGravityScale = 0.05f;
    this->ShoutHoverBootsBegin = NULL;
    this->HoverBootActivateDuration = 0.25f;
    this->bHoverBootsActive = false;
    this->HoverBootMaxDuration = 0.50f;
    this->JumpBootsZVelocity = 800.00f;
    this->JumpBootsActive = false;
}

