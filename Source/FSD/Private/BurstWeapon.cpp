#include "BurstWeapon.h"
#include "DamageComponent.h"

ABurstWeapon::ABurstWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BurstFireBonusDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BurstFireDamageBonus"));
}

void ABurstWeapon::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}



