#include "Bomber.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

class UPrimitiveComponent;
class AActor;

void ABomber::StopSpinAndDie() {
}

void ABomber::SetDropAcid(bool NewDropAcid) {
}


void ABomber::OnRep_DropAcid() {
}

void ABomber::OnRep_Death() {
}

void ABomber::OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABomber::OnBladderDamage(float Amount) {
}

void ABomber::OnArmorDestroyed(FName Name) {
}

void ABomber::HideMesh() {
}

bool ABomber::GetDropAcid() const {
    return false;
}

bool ABomber::AreBladdersDestroyed() const {
    return false;
}

void ABomber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABomber, HasDied);
    DOREPLIFETIME(ABomber, IsRightDestroyed);
    DOREPLIFETIME(ABomber, IsLeftDestroyed);
    DOREPLIFETIME(ABomber, dropAcid);
}

ABomber::ABomber() {
    this->GooSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("GooAudioComponent"));
    this->AcidEmitterLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("GooEmitterLeft"));
    this->AcidEmitterRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("GooEmitterRight"));
    this->AcidProjectile = NULL;
    this->deathParticles = NULL;
    this->deathSound = NULL;
    this->DeathPanicSound = NULL;
    this->BleedParticles = NULL;
    this->BladderDestroyedNoise = NULL;
    this->RagdollForceModifier = 0.00f;
    this->DeathYRotationSpeed = 0.00f;
    this->DeathXRotationSpeed = 0.00f;
    this->SearchRange = 0.00f;
    this->NewPointMax = 0.00f;
    this->NewPointMin = 0.00f;
    this->DeathSpeed = 0.00f;
    this->DeathAcceleration = 0.00f;
    this->AcidRate = 1.00f;
    this->PostDeathAcidTime = 10.00f;
    this->HasDied = false;
    this->IsRightDestroyed = false;
    this->IsLeftDestroyed = false;
    this->dropAcid = false;
}

