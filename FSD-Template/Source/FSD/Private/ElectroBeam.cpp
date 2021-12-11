#include "ElectroBeam.h"
#include "Net/UnrealNetwork.h"

class AActor;
class USceneComponent;
class UHealthComponentBase;
class UParticleSystemComponent;
class UCapsuleComponent;
class UAudioComponent;

void AElectroBeam::SetTarget(USceneComponent* TargetPoint) {
}

void AElectroBeam::SetSource(USceneComponent* SourcePoint) {
}

void AElectroBeam::SetParents(AActor* firstParent, AActor* secondParent) {
}

void AElectroBeam::RecalculateBeam() {
}

void AElectroBeam::OnRep_TargetLocation() {
}

void AElectroBeam::OnRep_SourceLocation() {
}

void AElectroBeam::OnRep_Flag() {
}

void AElectroBeam::OnParentTwoDeath(UHealthComponentBase* HealthComponent) {
}

void AElectroBeam::OnParentOneDeath(UHealthComponentBase* HealthComponent) {
}

UParticleSystemComponent* AElectroBeam::GetParticleEffect() {
    return NULL;
}

UCapsuleComponent* AElectroBeam::GetCollider() {
    return NULL;
}

UAudioComponent* AElectroBeam::GetAudio() {
    return NULL;
}

void AElectroBeam::DelayedSetTarget(USceneComponent* TargetPoint) {
}

void AElectroBeam::DelayedSetSource(USceneComponent* SourcePoint) {
}

void AElectroBeam::DeactivateCollisionAndEffect() {
}

void AElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectroBeam, SourceLocation);
    DOREPLIFETIME(AElectroBeam, TargetLocation);
    DOREPLIFETIME(AElectroBeam, IsLit);
}

AElectroBeam::AElectroBeam() {
    this->DelaySource = NULL;
    this->DelayTarget = NULL;
    this->MaxLitTime = 0.00f;
    this->MinLitTime = 0.00f;
    this->MaxUnlitTime = 0.00f;
    this->MinUnlitTime = 0.00f;
    this->ShouldFlicker = false;
    this->IsLit = false;
}

