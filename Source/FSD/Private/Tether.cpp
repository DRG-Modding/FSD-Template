#include "Tether.h"
#include "Net/UnrealNetwork.h"
#include "InstantUsable.h"
#include "Components/SkeletalMeshComponent.h"
#include "CarriableComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "DamageComponent.h"

void ATether::SetIsOnGround(bool NewIsOnGround) {
}




void ATether::Explode_Implementation() {
}

void ATether::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATether, IsOnGround);
}

ATether::ATether() {
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->UsableComponent = CreateDefaultSubobject<UInstantUsable>(TEXT("Usable"));
    this->Carry = CreateDefaultSubobject<UCarriableComponent>(TEXT("CarryComponent"));
    this->UseTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("UseTrigger"));
    this->TetherBeam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TetherBeam"));
    this->PysicalCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PhysCollision"));
    this->ExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamage"));
    this->ExplosionParticle = NULL;
    this->ExplosionSound = NULL;
    this->IsOnGround = false;
    this->KnockBackForce = 300.00f;
}

