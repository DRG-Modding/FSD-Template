#include "RandomFiringGuntowerModule.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "DamageComponent.h"

void ARandomFiringGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARandomFiringGuntowerModule, OtherCurrentRotation);
    DOREPLIFETIME(ARandomFiringGuntowerModule, IsAttacking);
}

ARandomFiringGuntowerModule::ARandomFiringGuntowerModule() {
    this->LaserFrontTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserFrontTop"));
    this->LaserFrontBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserFrontBottom"));
    this->LaserBackTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBackTop"));
    this->LaserBackBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBackBottom"));
    this->FrontTopLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontTopMuzzleEffect"));
    this->FrontBottomLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontBottomMuzzleEffect"));
    this->BackTopLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackMuzzleEffect"));
    this->BackBottomLaserMuzzle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackBottimMuzzleEffect"));
    this->LaserImpact = NULL;
    this->LaserSound = CreateDefaultSubobject<UAudioComponent>(TEXT("LaserSound"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BoneSpaceTurretMaxYaw = 0.00f;
    this->BoneSpaceTurretMaxPitch = 0.00f;
    this->TimeBetweenAttacks = 0.00f;
    this->TimeUntilNextAttack = 3.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->TurretAimSpeed = 0.00f;
    this->LaserLeghtRatio = 1.00f;
    this->TimeBetweenHits = 0.25f;
    this->ChanceToInvert = 0.50f;
    this->PlatformDissolveRadius = 100.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->IsAttacking = false;
}

