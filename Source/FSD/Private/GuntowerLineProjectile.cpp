#include "GuntowerLineProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "DamageComponent.h"

AGuntowerLineProjectile::AGuntowerLineProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("LeftLinePoint"));
    this->RightLinePoint = CreateDefaultSubobject<USceneComponent>(TEXT("RightLinePoint"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BeamParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeamParticles"));
    this->PlatformDissolveRadius = 150.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->HitParticles = NULL;
    this->TimeBetweenLineChecks = 0.00f;
    this->LeftLinePoint->SetupAttachment(RootComponent);
    this->RightLinePoint->SetupAttachment(RootComponent);
    this->BeamParticles->SetupAttachment(RootComponent);
}

void AGuntowerLineProjectile::TurnOffParticles() {
}

void AGuntowerLineProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}


