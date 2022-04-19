#include "Grenade.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/ProjectileMovementComponent.h"

class AActor;
class AGrenade;

void AGrenade::OnRep_HasExploded() {
}


bool AGrenade::IsNonFriendlyPawn(AActor* Actor) const {
    return false;
}

bool AGrenade::IsNonFriendly(AActor* Actor) const {
    return false;
}

TSubclassOf<AActor> AGrenade::GetWeaponViewClass() const {
    return NULL;
}

AGrenade* AGrenade::GetGrenadeDefaultObject(TSubclassOf<AGrenade> GrenadeClass) {
    return NULL;
}

void AGrenade::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenade, HasExploded);
}

AGrenade::AGrenade() {
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->Duration = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->ExplodeOnImpact = false;
    this->MaxGrenades = 0;
    this->HasExploded = false;
    this->EnableDangerousSaveGameIDEditing = false;
    this->ItemID = NULL;
    this->WeaponPreviewClass = NULL;
    this->LoadoutProxy = NULL;
    this->HandAttachMesh = NULL;
    this->ImpactGroundSound = NULL;
    this->ImpactGroundParticles = NULL;
    this->GrenadeAnimationSetOverride = NULL;
}

