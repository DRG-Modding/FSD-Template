#include "ElectroBeam.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

AElectroBeam::AElectroBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("collider"));
    this->collider = (UCapsuleComponent*)RootComponent;
    this->SourceComponent = NULL;
    this->TargetComponent = NULL;
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
    this->BeamEffect->SetupAttachment(RootComponent);
    this->ZappSound->SetupAttachment(RootComponent);
}

void AElectroBeam::SetTargetComponent(USceneComponent* TargetPoint) {
}

void AElectroBeam::SetSourceComponent(USceneComponent* SourcePoint) {
}

void AElectroBeam::SetParents(AActor* firstParent, AActor* secondParent) {
}

void AElectroBeam::RecalculateBeam() {
}

void AElectroBeam::OnRep_TargetComponent() {
}

void AElectroBeam::OnRep_SourceComponent() {
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

void AElectroBeam::DeactivateCollisionAndEffect() {
}

void AElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectroBeam, SourceComponent);
    DOREPLIFETIME(AElectroBeam, TargetComponent);
    DOREPLIFETIME(AElectroBeam, IsLit);
}


