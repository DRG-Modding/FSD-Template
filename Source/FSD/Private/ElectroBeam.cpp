#include "ElectroBeam.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

class USceneComponent;
class AActor;
class UHealthComponentBase;

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

void AElectroBeam::OnParentDeath(UHealthComponentBase* HealthComponent) {
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
    this->collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("collider"));
    this->DelaySource = NULL;
    this->DelayTarget = NULL;
    this->BeamEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamEffect"));
    this->ZappSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ZappSound"));
    this->MaxLitTime = 0.00f;
    this->MinLitTime = 0.00f;
    this->MaxUnlitTime = 0.00f;
    this->MinUnlitTime = 0.00f;
    this->ShouldFlicker = false;
    this->IsLit = false;
}

