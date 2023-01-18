#include "ThrowableActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"



void AThrowableActor::OnRep_IsMoving() {
}

void AThrowableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableActor, IsMoving);
}

AThrowableActor::AThrowableActor() {
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->IsMoving = true;
    this->IgnoreFellOutOfWorld = false;
    this->IgnoreOwnersCollision = true;
}

