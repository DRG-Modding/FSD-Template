#include "JetBootsMovementComponent.h"
#include "Net/UnrealNetwork.h"

UJetBootsMovementComponent::UJetBootsMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
    this->UseAudioComponent = NULL;
    this->OverHeatAudioComponent = NULL;
    this->DeactivatedAudioComponent = NULL;
    this->TP_UseAudioComponent = NULL;
    this->TP_OverHeatAudioComponent = NULL;
    this->TP_DeactivatedAudioComponent = NULL;
    this->FootSocketNameLeft = TEXT("Dwarf_LegLHeelSocket");
    this->FootSocketNameRight = TEXT("Dwarf_LegRHeelSocket");
    this->LFootAttachMeshComponent = NULL;
    this->RFootAttachMeshComponent = NULL;
    this->LeftFootParticles = NULL;
    this->RightFootParticles = NULL;
    this->FPFootParticles = NULL;
    this->Character = NULL;
    this->FromJumpDelay = 0.35f;
    this->FromTerrainStartDelay = 0.20f;
    this->OverHeatAtPercent = 0.98f;
    this->AddPlayerAirVelocityToThrowFactor = 1.00f;
    this->CurrentJetFuel = 0.00f;
    this->isUsing = false;
    this->isFromTakeOff = false;
    this->overheated = false;
}

void UJetBootsMovementComponent::Server_SetOverheated_Implementation(bool Current) {
}

void UJetBootsMovementComponent::Server_SetIsUsing_Implementation(bool Current, bool last, bool NewIsFromTakeOff) {
}

void UJetBootsMovementComponent::Server_SetCurrentJetFuel_Implementation(float Current) {
}

void UJetBootsMovementComponent::RemoveJetBoots() {
}








void UJetBootsMovementComponent::OnStateChanged(ECharacterState State) {
}

void UJetBootsMovementComponent::OnRep_OverHeated(bool lastOverheated) {
}

void UJetBootsMovementComponent::OnRep_IsUsing(bool lastUsing) {
}

void UJetBootsMovementComponent::OnRep_CurrentJetFuel() {
}

void UJetBootsMovementComponent::OnPlayerCharacterHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UJetBootsMovementComponent::OnJumpReleased() {
}

void UJetBootsMovementComponent::OnJumpPressed() {
}

void UJetBootsMovementComponent::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode) {
}

void UJetBootsMovementComponent::Client_SetIsUsing_Implementation(bool NewIsUsing) {
}

void UJetBootsMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UJetBootsMovementComponent, CurrentJetFuel);
    DOREPLIFETIME(UJetBootsMovementComponent, isUsing);
    DOREPLIFETIME(UJetBootsMovementComponent, isFromTakeOff);
    DOREPLIFETIME(UJetBootsMovementComponent, overheated);
}


