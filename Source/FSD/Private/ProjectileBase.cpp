#include "ProjectileBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"

class UDamageComponent;
class UTerrainMaterial;
class UPrimitiveComponent;
class AProjectileBase;
class AActor;

UTerrainMaterial* AProjectileBase::TryGetTerrainMaterial() const {
    return NULL;
}

void AProjectileBase::StopMovement() {
}

void AProjectileBase::Server_SetState_Implementation(FVector_NetQuantize Position, FVector_NetQuantize Velocity) {
}
bool AProjectileBase::Server_SetState_Validate(FVector_NetQuantize Position, FVector_NetQuantize Velocity) {
    return true;
}

void AProjectileBase::Server_Penetrated_Implementation(const FProjectileImpact& Impact) {
}
bool AProjectileBase::Server_Penetrated_Validate(const FProjectileImpact& Impact) {
    return true;
}

void AProjectileBase::Server_Impacted_Implementation(const FProjectileImpact& Impact) {
}
bool AProjectileBase::Server_Impacted_Validate(const FProjectileImpact& Impact) {
    return true;
}


void AProjectileBase::OnRep_ProjectileImpact() {
}

void AProjectileBase::OnRep_IsDorment(const bool wasDorment) {
}





void AProjectileBase::InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity) {
}

void AProjectileBase::InitComponents() {
}

void AProjectileBase::IgnoreCollision(UPrimitiveComponent* otherCollider) {
}

bool AProjectileBase::HasImpactAuthority() const {
    return false;
}

float AProjectileBase::GetGameTimeSinceActivation() const {
    return 0.0f;
}

int32 AProjectileBase::GetBoneIndex() const {
    return 0;
}


void AProjectileBase::DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB) {
}

void AProjectileBase::DisableAndDestroy() {
}

void AProjectileBase::DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult) {
}


void AProjectileBase::Client_DrawServersDebugPath_Implementation(FVector Location) {
}

void AProjectileBase::Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity) {
}

void AProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectileBase, ProjectileImpact);
    DOREPLIFETIME(AProjectileBase, IsSpawnedFromWeapon);
    DOREPLIFETIME(AProjectileBase, IsDorment);
}

AProjectileBase::AProjectileBase() {
    this->IsSpawnedFromWeapon = false;
    this->Exploded = false;
    this->DoOnImpact = false;
    this->DoOnImpact2 = false;
    this->DoOnImpact3 = false;
    this->DoOnSpawnVar = false;
    this->GravityMultiplier = 1.00f;
    this->IsDorment = false;
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->LifeSpan = 60.00f;
    this->VelocityMultiplier = 1.00f;
    this->AffectedByDifficultySpeedModifier = false;
    this->SetInitialSpeedToMaxSpeed = false;
    this->AutoDisableCollisionOnImpact = true;
    this->WhizbySound = NULL;
    this->WhizByCooldown = 0.30f;
    this->WhizByStartDistance = 500.00f;
    this->EOnImpactBehaviour = EOnProjectileImpactBehaviourEnum::ClientAuthoritative;
}

