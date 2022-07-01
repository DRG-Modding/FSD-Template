#include "TremorAttackComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class UParticleSystemComponent;
class AActor;
class UBoxComponent;

void UTremorAttackComponent::StopParticles() {
}

void UTremorAttackComponent::StartParticles() {
}

void UTremorAttackComponent::OnTargetExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTremorAttackComponent::OnTargetEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTremorAttackComponent::OnRep_IsAttackActive() {
}

bool UTremorAttackComponent::IsInited() const {
    return false;
}

void UTremorAttackComponent::InitTremorAttack(UBoxComponent* Box, UParticleSystemComponent* Particles) {
}

void UTremorAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTremorAttackComponent, IsAttackActive);
}

UTremorAttackComponent::UTremorAttackComponent() {
    this->IsAttackActive = false;
    this->CollisionComponent = NULL;
    this->ParticlesComponent = NULL;
    this->InitialParticlesDelay = 0.38f;
    this->PostParticleDelay = 0.00f;
    this->TargetMaxDistanceFromGround = 100.00f;
    this->TimeBetweenDamageTicks = 0.50f;
    this->LaunchForce = 200.00f;
    this->Duration = 3.00f;
}

