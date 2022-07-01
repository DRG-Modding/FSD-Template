#include "Projectile.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "FSDProjectileMovementComponent.h"

class UObject;
class AProjectileBase;
class APawn;
class USceneComponent;
class AProjectile;
class UFSDPhysicalMaterial;

AProjectileBase* AProjectile::SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, FVector Origin, FRotator velocityDirection) {
    return NULL;
}

AProjectileBase* AProjectile::SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection) {
    return NULL;
}

AProjectileBase* AProjectile::SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> ProjectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity) {
    return NULL;
}

void AProjectile::SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay) {
}

void AProjectile::Server_DisableHoming_Implementation() {
}

void AProjectile::OnRep_State(const FProjectileState& oldState) {
}

void AProjectile::OnPenetration(const FHitResult& HitResult) {
}

void AProjectile::OnImpact(const FHitResult& HitResult) {
}

void AProjectile::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

UFSDPhysicalMaterial* AProjectile::FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex) const {
    return NULL;
}

void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectile, State);
}

AProjectile::AProjectile() {
    this->UseArmorDamageBoneCheck = false;
    this->MovementComponent = CreateDefaultSubobject<UFSDProjectileMovementComponent>(TEXT("ProjectileComponent"));
}

