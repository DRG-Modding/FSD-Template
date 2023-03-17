#include "Grenade.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

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
    
    DOREPLIFETIME(AGrenade, Duration);
    DOREPLIFETIME(AGrenade, HasExploded);
}

AGrenade::AGrenade() {
    this->CrossHairType = NULL;
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->CoolDown = -1.00f;
    this->Duration = 0.00f;
    this->CanCook = false;
    this->cookTime = -1.00f;
    this->CookingSound = NULL;
    this->ExplosionDelay = 0.00f;
    this->ExplodeOnImpact = false;
    this->MaxGrenades = 0;
    this->HasExploded = false;
    this->ItemID = NULL;
    this->WeaponPreviewClass = NULL;
    this->LoadoutProxy = NULL;
    this->HandAttachMesh = NULL;
    this->ProjectionSettings = NULL;
    this->ImpactGroundSound = NULL;
    this->ImpactGroundParticles = NULL;
    this->GrenadeAnimationSetOverride = NULL;
}

