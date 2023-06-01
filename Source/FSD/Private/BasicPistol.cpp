#include "BasicPistol.h"
#include "DamageComponent.h"

void ABasicPistol::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void ABasicPistol::OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated) {
}

ABasicPistol::ABasicPistol() {
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BurstArmorDamageMultiplier = 1.00f;
    this->ConsecutiveHitsDamageBonus = 0.00f;
    this->ConsecutiveHitsMaxBonus = 6.00f;
}

